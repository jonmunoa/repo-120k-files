<template>
  <section class="panel-37781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37781");
const base = ref(37781);
const total = computed(() => base.value * 2);

function incrementar37781() {
  base.value++;
}
</script>
