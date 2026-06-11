<template>
  <section class="panel-26465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26465");
const base = ref(26465);
const total = computed(() => base.value * 2);

function incrementar26465() {
  base.value++;
}
</script>
