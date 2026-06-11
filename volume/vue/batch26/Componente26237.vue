<template>
  <section class="panel-26237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26237");
const base = ref(26237);
const total = computed(() => base.value * 2);

function incrementar26237() {
  base.value++;
}
</script>
