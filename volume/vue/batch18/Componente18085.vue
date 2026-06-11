<template>
  <section class="panel-18085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18085");
const base = ref(18085);
const total = computed(() => base.value * 2);

function incrementar18085() {
  base.value++;
}
</script>
