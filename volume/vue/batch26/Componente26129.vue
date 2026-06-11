<template>
  <section class="panel-26129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26129");
const base = ref(26129);
const total = computed(() => base.value * 2);

function incrementar26129() {
  base.value++;
}
</script>
