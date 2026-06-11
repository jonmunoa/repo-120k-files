<template>
  <section class="panel-36133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36133");
const base = ref(36133);
const total = computed(() => base.value * 2);

function incrementar36133() {
  base.value++;
}
</script>
