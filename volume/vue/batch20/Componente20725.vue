<template>
  <section class="panel-20725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20725");
const base = ref(20725);
const total = computed(() => base.value * 2);

function incrementar20725() {
  base.value++;
}
</script>
