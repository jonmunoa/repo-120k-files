<template>
  <section class="panel-38685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38685");
const base = ref(38685);
const total = computed(() => base.value * 2);

function incrementar38685() {
  base.value++;
}
</script>
