<template>
  <section class="panel-26165">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26165");
const base = ref(26165);
const total = computed(() => base.value * 2);

function incrementar26165() {
  base.value++;
}
</script>
