<template>
  <section class="panel-57729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57729");
const base = ref(57729);
const total = computed(() => base.value * 2);

function incrementar57729() {
  base.value++;
}
</script>
