<template>
  <section class="panel-21725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21725");
const base = ref(21725);
const total = computed(() => base.value * 2);

function incrementar21725() {
  base.value++;
}
</script>
