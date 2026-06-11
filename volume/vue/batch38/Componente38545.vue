<template>
  <section class="panel-38545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38545");
const base = ref(38545);
const total = computed(() => base.value * 2);

function incrementar38545() {
  base.value++;
}
</script>
