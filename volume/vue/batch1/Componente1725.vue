<template>
  <section class="panel-1725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1725");
const base = ref(1725);
const total = computed(() => base.value * 2);

function incrementar1725() {
  base.value++;
}
</script>
