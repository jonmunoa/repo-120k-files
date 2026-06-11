<template>
  <section class="panel-26249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26249");
const base = ref(26249);
const total = computed(() => base.value * 2);

function incrementar26249() {
  base.value++;
}
</script>
