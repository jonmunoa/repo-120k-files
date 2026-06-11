<template>
  <section class="panel-14133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14133");
const base = ref(14133);
const total = computed(() => base.value * 2);

function incrementar14133() {
  base.value++;
}
</script>
