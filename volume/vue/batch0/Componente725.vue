<template>
  <section class="panel-725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 725");
const base = ref(725);
const total = computed(() => base.value * 2);

function incrementar725() {
  base.value++;
}
</script>
