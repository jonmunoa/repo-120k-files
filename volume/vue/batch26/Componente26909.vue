<template>
  <section class="panel-26909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26909");
const base = ref(26909);
const total = computed(() => base.value * 2);

function incrementar26909() {
  base.value++;
}
</script>
