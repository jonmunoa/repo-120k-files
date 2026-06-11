<template>
  <section class="panel-5213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5213");
const base = ref(5213);
const total = computed(() => base.value * 2);

function incrementar5213() {
  base.value++;
}
</script>
