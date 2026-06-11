<template>
  <section class="panel-57817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57817");
const base = ref(57817);
const total = computed(() => base.value * 2);

function incrementar57817() {
  base.value++;
}
</script>
