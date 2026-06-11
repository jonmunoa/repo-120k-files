<template>
  <section class="panel-26437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26437");
const base = ref(26437);
const total = computed(() => base.value * 2);

function incrementar26437() {
  base.value++;
}
</script>
