<template>
  <section class="panel-26553">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26553");
const base = ref(26553);
const total = computed(() => base.value * 2);

function incrementar26553() {
  base.value++;
}
</script>
