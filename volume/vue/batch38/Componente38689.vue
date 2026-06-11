<template>
  <section class="panel-38689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38689");
const base = ref(38689);
const total = computed(() => base.value * 2);

function incrementar38689() {
  base.value++;
}
</script>
