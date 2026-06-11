<template>
  <section class="panel-26029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26029");
const base = ref(26029);
const total = computed(() => base.value * 2);

function incrementar26029() {
  base.value++;
}
</script>
