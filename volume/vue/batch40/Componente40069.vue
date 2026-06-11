<template>
  <section class="panel-40069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40069");
const base = ref(40069);
const total = computed(() => base.value * 2);

function incrementar40069() {
  base.value++;
}
</script>
