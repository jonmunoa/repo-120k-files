<template>
  <section class="panel-29133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29133");
const base = ref(29133);
const total = computed(() => base.value * 2);

function incrementar29133() {
  base.value++;
}
</script>
