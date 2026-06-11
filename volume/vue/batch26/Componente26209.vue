<template>
  <section class="panel-26209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26209");
const base = ref(26209);
const total = computed(() => base.value * 2);

function incrementar26209() {
  base.value++;
}
</script>
