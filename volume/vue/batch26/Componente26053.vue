<template>
  <section class="panel-26053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26053");
const base = ref(26053);
const total = computed(() => base.value * 2);

function incrementar26053() {
  base.value++;
}
</script>
