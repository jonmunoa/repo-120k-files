<template>
  <section class="panel-24781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24781");
const base = ref(24781);
const total = computed(() => base.value * 2);

function incrementar24781() {
  base.value++;
}
</script>
