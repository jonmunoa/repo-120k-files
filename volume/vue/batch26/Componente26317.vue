<template>
  <section class="panel-26317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26317");
const base = ref(26317);
const total = computed(() => base.value * 2);

function incrementar26317() {
  base.value++;
}
</script>
