<template>
  <section class="panel-26949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26949");
const base = ref(26949);
const total = computed(() => base.value * 2);

function incrementar26949() {
  base.value++;
}
</script>
