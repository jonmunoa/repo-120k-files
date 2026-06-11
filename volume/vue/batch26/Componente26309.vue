<template>
  <section class="panel-26309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26309");
const base = ref(26309);
const total = computed(() => base.value * 2);

function incrementar26309() {
  base.value++;
}
</script>
