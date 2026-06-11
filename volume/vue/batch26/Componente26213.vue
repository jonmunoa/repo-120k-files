<template>
  <section class="panel-26213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26213");
const base = ref(26213);
const total = computed(() => base.value * 2);

function incrementar26213() {
  base.value++;
}
</script>
