<template>
  <section class="panel-26513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26513");
const base = ref(26513);
const total = computed(() => base.value * 2);

function incrementar26513() {
  base.value++;
}
</script>
