<template>
  <section class="panel-26141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26141");
const base = ref(26141);
const total = computed(() => base.value * 2);

function incrementar26141() {
  base.value++;
}
</script>
