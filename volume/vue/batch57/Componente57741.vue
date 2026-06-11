<template>
  <section class="panel-57741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57741");
const base = ref(57741);
const total = computed(() => base.value * 2);

function incrementar57741() {
  base.value++;
}
</script>
