<template>
  <section class="panel-57201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57201");
const base = ref(57201);
const total = computed(() => base.value * 2);

function incrementar57201() {
  base.value++;
}
</script>
