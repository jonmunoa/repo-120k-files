<template>
  <section class="panel-26233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26233");
const base = ref(26233);
const total = computed(() => base.value * 2);

function incrementar26233() {
  base.value++;
}
</script>
