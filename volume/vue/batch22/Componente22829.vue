<template>
  <section class="panel-22829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22829");
const base = ref(22829);
const total = computed(() => base.value * 2);

function incrementar22829() {
  base.value++;
}
</script>
