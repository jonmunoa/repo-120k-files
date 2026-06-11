<template>
  <section class="panel-26793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26793");
const base = ref(26793);
const total = computed(() => base.value * 2);

function incrementar26793() {
  base.value++;
}
</script>
