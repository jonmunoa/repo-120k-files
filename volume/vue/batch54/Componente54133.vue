<template>
  <section class="panel-54133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54133");
const base = ref(54133);
const total = computed(() => base.value * 2);

function incrementar54133() {
  base.value++;
}
</script>
