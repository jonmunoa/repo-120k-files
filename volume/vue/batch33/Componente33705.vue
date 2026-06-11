<template>
  <section class="panel-33705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33705");
const base = ref(33705);
const total = computed(() => base.value * 2);

function incrementar33705() {
  base.value++;
}
</script>
