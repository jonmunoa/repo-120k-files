<template>
  <section class="panel-26077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26077");
const base = ref(26077);
const total = computed(() => base.value * 2);

function incrementar26077() {
  base.value++;
}
</script>
