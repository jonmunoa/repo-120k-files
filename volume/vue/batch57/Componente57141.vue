<template>
  <section class="panel-57141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57141");
const base = ref(57141);
const total = computed(() => base.value * 2);

function incrementar57141() {
  base.value++;
}
</script>
