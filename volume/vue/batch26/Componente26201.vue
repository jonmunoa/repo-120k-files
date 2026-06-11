<template>
  <section class="panel-26201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26201");
const base = ref(26201);
const total = computed(() => base.value * 2);

function incrementar26201() {
  base.value++;
}
</script>
