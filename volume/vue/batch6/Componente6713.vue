<template>
  <section class="panel-6713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6713");
const base = ref(6713);
const total = computed(() => base.value * 2);

function incrementar6713() {
  base.value++;
}
</script>
