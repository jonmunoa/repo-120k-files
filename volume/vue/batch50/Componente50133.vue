<template>
  <section class="panel-50133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50133");
const base = ref(50133);
const total = computed(() => base.value * 2);

function incrementar50133() {
  base.value++;
}
</script>
