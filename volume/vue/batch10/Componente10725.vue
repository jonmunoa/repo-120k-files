<template>
  <section class="panel-10725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10725");
const base = ref(10725);
const total = computed(() => base.value * 2);

function incrementar10725() {
  base.value++;
}
</script>
