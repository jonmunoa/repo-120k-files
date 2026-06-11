<template>
  <section class="panel-8133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8133");
const base = ref(8133);
const total = computed(() => base.value * 2);

function incrementar8133() {
  base.value++;
}
</script>
