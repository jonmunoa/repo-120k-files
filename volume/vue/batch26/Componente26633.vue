<template>
  <section class="panel-26633">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26633");
const base = ref(26633);
const total = computed(() => base.value * 2);

function incrementar26633() {
  base.value++;
}
</script>
