<template>
  <section class="panel-43829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43829");
const base = ref(43829);
const total = computed(() => base.value * 2);

function incrementar43829() {
  base.value++;
}
</script>
