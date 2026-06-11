<template>
  <section class="panel-26573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26573");
const base = ref(26573);
const total = computed(() => base.value * 2);

function incrementar26573() {
  base.value++;
}
</script>
