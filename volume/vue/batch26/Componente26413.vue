<template>
  <section class="panel-26413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26413");
const base = ref(26413);
const total = computed(() => base.value * 2);

function incrementar26413() {
  base.value++;
}
</script>
