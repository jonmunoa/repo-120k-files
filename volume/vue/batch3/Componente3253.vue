<template>
  <section class="panel-3253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3253");
const base = ref(3253);
const total = computed(() => base.value * 2);

function incrementar3253() {
  base.value++;
}
</script>
