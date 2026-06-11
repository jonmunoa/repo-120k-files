<template>
  <section class="panel-44865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44865");
const base = ref(44865);
const total = computed(() => base.value * 2);

function incrementar44865() {
  base.value++;
}
</script>
