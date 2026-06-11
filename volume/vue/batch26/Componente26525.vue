<template>
  <section class="panel-26525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26525");
const base = ref(26525);
const total = computed(() => base.value * 2);

function incrementar26525() {
  base.value++;
}
</script>
