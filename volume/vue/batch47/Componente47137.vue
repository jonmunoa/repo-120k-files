<template>
  <section class="panel-47137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47137");
const base = ref(47137);
const total = computed(() => base.value * 2);

function incrementar47137() {
  base.value++;
}
</script>
