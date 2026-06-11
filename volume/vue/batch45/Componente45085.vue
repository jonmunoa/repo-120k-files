<template>
  <section class="panel-45085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45085");
const base = ref(45085);
const total = computed(() => base.value * 2);

function incrementar45085() {
  base.value++;
}
</script>
