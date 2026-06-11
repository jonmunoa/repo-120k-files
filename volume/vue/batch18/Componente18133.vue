<template>
  <section class="panel-18133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18133");
const base = ref(18133);
const total = computed(() => base.value * 2);

function incrementar18133() {
  base.value++;
}
</script>
