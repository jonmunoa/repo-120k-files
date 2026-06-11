<template>
  <section class="panel-26545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26545");
const base = ref(26545);
const total = computed(() => base.value * 2);

function incrementar26545() {
  base.value++;
}
</script>
