<template>
  <section class="panel-41085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41085");
const base = ref(41085);
const total = computed(() => base.value * 2);

function incrementar41085() {
  base.value++;
}
</script>
