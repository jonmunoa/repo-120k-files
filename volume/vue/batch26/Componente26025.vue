<template>
  <section class="panel-26025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26025");
const base = ref(26025);
const total = computed(() => base.value * 2);

function incrementar26025() {
  base.value++;
}
</script>
