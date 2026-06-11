<template>
  <section class="panel-57461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57461");
const base = ref(57461);
const total = computed(() => base.value * 2);

function incrementar57461() {
  base.value++;
}
</script>
