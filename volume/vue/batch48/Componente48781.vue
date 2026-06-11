<template>
  <section class="panel-48781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48781");
const base = ref(48781);
const total = computed(() => base.value * 2);

function incrementar48781() {
  base.value++;
}
</script>
