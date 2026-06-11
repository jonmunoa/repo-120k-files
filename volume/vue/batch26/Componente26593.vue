<template>
  <section class="panel-26593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26593");
const base = ref(26593);
const total = computed(() => base.value * 2);

function incrementar26593() {
  base.value++;
}
</script>
