<template>
  <section class="panel-5829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5829");
const base = ref(5829);
const total = computed(() => base.value * 2);

function incrementar5829() {
  base.value++;
}
</script>
