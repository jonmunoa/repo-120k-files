<template>
  <section class="panel-8781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8781");
const base = ref(8781);
const total = computed(() => base.value * 2);

function incrementar8781() {
  base.value++;
}
</script>
