<template>
  <section class="panel-13633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13633");
const base = ref(13633);
const total = computed(() => base.value * 2);

function incrementar13633() {
  base.value++;
}
</script>
