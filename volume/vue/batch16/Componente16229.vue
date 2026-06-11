<template>
  <section class="panel-16229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16229");
const base = ref(16229);
const total = computed(() => base.value * 2);

function incrementar16229() {
  base.value++;
}
</script>
