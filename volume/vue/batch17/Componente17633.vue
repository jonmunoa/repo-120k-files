<template>
  <section class="panel-17633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17633");
const base = ref(17633);
const total = computed(() => base.value * 2);

function incrementar17633() {
  base.value++;
}
</script>
