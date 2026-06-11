<template>
  <section class="panel-19229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19229");
const base = ref(19229);
const total = computed(() => base.value * 2);

function incrementar19229() {
  base.value++;
}
</script>
