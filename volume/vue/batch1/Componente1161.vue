<template>
  <section class="panel-1161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1161");
const base = ref(1161);
const total = computed(() => base.value * 2);

function incrementar1161() {
  base.value++;
}
</script>
