<template>
  <section class="panel-26197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26197");
const base = ref(26197);
const total = computed(() => base.value * 2);

function incrementar26197() {
  base.value++;
}
</script>
