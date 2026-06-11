<template>
  <section class="panel-35917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35917");
const base = ref(35917);
const total = computed(() => base.value * 2);

function incrementar35917() {
  base.value++;
}
</script>
