<template>
  <section class="panel-6133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6133");
const base = ref(6133);
const total = computed(() => base.value * 2);

function incrementar6133() {
  base.value++;
}
</script>
