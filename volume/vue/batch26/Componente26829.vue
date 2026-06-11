<template>
  <section class="panel-26829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26829");
const base = ref(26829);
const total = computed(() => base.value * 2);

function incrementar26829() {
  base.value++;
}
</script>
