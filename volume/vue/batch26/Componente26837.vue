<template>
  <section class="panel-26837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26837");
const base = ref(26837);
const total = computed(() => base.value * 2);

function incrementar26837() {
  base.value++;
}
</script>
