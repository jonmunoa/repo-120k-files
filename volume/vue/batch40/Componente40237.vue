<template>
  <section class="panel-40237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40237");
const base = ref(40237);
const total = computed(() => base.value * 2);

function incrementar40237() {
  base.value++;
}
</script>
