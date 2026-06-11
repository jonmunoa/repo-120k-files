<template>
  <section class="panel-39877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39877");
const base = ref(39877);
const total = computed(() => base.value * 2);

function incrementar39877() {
  base.value++;
}
</script>
