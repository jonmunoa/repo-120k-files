<template>
  <section class="panel-26297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26297");
const base = ref(26297);
const total = computed(() => base.value * 2);

function incrementar26297() {
  base.value++;
}
</script>
