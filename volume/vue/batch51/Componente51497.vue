<template>
  <section class="panel-51497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51497");
const base = ref(51497);
const total = computed(() => base.value * 2);

function incrementar51497() {
  base.value++;
}
</script>
