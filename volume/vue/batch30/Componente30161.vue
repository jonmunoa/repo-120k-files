<template>
  <section class="panel-30161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30161");
const base = ref(30161);
const total = computed(() => base.value * 2);

function incrementar30161() {
  base.value++;
}
</script>
