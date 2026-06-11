<template>
  <section class="panel-26145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26145");
const base = ref(26145);
const total = computed(() => base.value * 2);

function incrementar26145() {
  base.value++;
}
</script>
