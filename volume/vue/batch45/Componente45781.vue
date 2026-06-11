<template>
  <section class="panel-45781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45781");
const base = ref(45781);
const total = computed(() => base.value * 2);

function incrementar45781() {
  base.value++;
}
</script>
