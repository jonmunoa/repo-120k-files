<template>
  <section class="panel-8769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8769");
const base = ref(8769);
const total = computed(() => base.value * 2);

function incrementar8769() {
  base.value++;
}
</script>
