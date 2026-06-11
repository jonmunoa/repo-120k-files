<template>
  <section class="panel-6229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6229");
const base = ref(6229);
const total = computed(() => base.value * 2);

function incrementar6229() {
  base.value++;
}
</script>
