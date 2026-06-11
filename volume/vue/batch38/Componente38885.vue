<template>
  <section class="panel-38885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38885");
const base = ref(38885);
const total = computed(() => base.value * 2);

function incrementar38885() {
  base.value++;
}
</script>
