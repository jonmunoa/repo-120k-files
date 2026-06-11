<template>
  <section class="panel-26517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26517");
const base = ref(26517);
const total = computed(() => base.value * 2);

function incrementar26517() {
  base.value++;
}
</script>
