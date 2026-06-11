<template>
  <section class="panel-6325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6325");
const base = ref(6325);
const total = computed(() => base.value * 2);

function incrementar6325() {
  base.value++;
}
</script>
