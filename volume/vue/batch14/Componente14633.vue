<template>
  <section class="panel-14633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14633");
const base = ref(14633);
const total = computed(() => base.value * 2);

function incrementar14633() {
  base.value++;
}
</script>
