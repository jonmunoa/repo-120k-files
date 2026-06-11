<template>
  <section class="panel-26565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26565");
const base = ref(26565);
const total = computed(() => base.value * 2);

function incrementar26565() {
  base.value++;
}
</script>
