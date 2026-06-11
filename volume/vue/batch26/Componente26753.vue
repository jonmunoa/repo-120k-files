<template>
  <section class="panel-26753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26753");
const base = ref(26753);
const total = computed(() => base.value * 2);

function incrementar26753() {
  base.value++;
}
</script>
