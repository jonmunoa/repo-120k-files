<template>
  <section class="panel-26257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26257");
const base = ref(26257);
const total = computed(() => base.value * 2);

function incrementar26257() {
  base.value++;
}
</script>
