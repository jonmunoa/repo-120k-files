<template>
  <section class="panel-2085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2085");
const base = ref(2085);
const total = computed(() => base.value * 2);

function incrementar2085() {
  base.value++;
}
</script>
