<template>
  <section class="panel-33633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33633");
const base = ref(33633);
const total = computed(() => base.value * 2);

function incrementar33633() {
  base.value++;
}
</script>
