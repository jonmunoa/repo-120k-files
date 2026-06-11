<template>
  <section class="panel-38781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38781");
const base = ref(38781);
const total = computed(() => base.value * 2);

function incrementar38781() {
  base.value++;
}
</script>
