<template>
  <section class="panel-57321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57321");
const base = ref(57321);
const total = computed(() => base.value * 2);

function incrementar57321() {
  base.value++;
}
</script>
