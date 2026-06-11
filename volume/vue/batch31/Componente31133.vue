<template>
  <section class="panel-31133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31133");
const base = ref(31133);
const total = computed(() => base.value * 2);

function incrementar31133() {
  base.value++;
}
</script>
