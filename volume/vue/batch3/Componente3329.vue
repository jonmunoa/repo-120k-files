<template>
  <section class="panel-3329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3329");
const base = ref(3329);
const total = computed(() => base.value * 2);

function incrementar3329() {
  base.value++;
}
</script>
