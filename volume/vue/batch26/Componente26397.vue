<template>
  <section class="panel-26397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26397");
const base = ref(26397);
const total = computed(() => base.value * 2);

function incrementar26397() {
  base.value++;
}
</script>
