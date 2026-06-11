<template>
  <section class="panel-26581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26581");
const base = ref(26581);
const total = computed(() => base.value * 2);

function incrementar26581() {
  base.value++;
}
</script>
