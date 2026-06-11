<template>
  <section class="panel-18489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18489");
const base = ref(18489);
const total = computed(() => base.value * 2);

function incrementar18489() {
  base.value++;
}
</script>
