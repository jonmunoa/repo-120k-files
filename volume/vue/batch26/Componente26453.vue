<template>
  <section class="panel-26453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26453");
const base = ref(26453);
const total = computed(() => base.value * 2);

function incrementar26453() {
  base.value++;
}
</script>
