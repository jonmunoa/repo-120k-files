<template>
  <section class="panel-44085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44085");
const base = ref(44085);
const total = computed(() => base.value * 2);

function incrementar44085() {
  base.value++;
}
</script>
