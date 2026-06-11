<template>
  <section class="panel-26033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26033");
const base = ref(26033);
const total = computed(() => base.value * 2);

function incrementar26033() {
  base.value++;
}
</script>
