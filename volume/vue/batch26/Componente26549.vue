<template>
  <section class="panel-26549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26549");
const base = ref(26549);
const total = computed(() => base.value * 2);

function incrementar26549() {
  base.value++;
}
</script>
