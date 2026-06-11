<template>
  <section class="panel-3369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3369");
const base = ref(3369);
const total = computed(() => base.value * 2);

function incrementar3369() {
  base.value++;
}
</script>
