<template>
  <section class="panel-7829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7829");
const base = ref(7829);
const total = computed(() => base.value * 2);

function incrementar7829() {
  base.value++;
}
</script>
