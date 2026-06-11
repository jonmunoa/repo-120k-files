<template>
  <section class="panel-38361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38361");
const base = ref(38361);
const total = computed(() => base.value * 2);

function incrementar38361() {
  base.value++;
}
</script>
