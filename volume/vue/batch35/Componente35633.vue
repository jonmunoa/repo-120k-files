<template>
  <section class="panel-35633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35633");
const base = ref(35633);
const total = computed(() => base.value * 2);

function incrementar35633() {
  base.value++;
}
</script>
