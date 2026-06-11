<template>
  <section class="panel-33085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33085");
const base = ref(33085);
const total = computed(() => base.value * 2);

function incrementar33085() {
  base.value++;
}
</script>
