<template>
  <section class="panel-26189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26189");
const base = ref(26189);
const total = computed(() => base.value * 2);

function incrementar26189() {
  base.value++;
}
</script>
