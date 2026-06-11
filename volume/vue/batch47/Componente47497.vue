<template>
  <section class="panel-47497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47497");
const base = ref(47497);
const total = computed(() => base.value * 2);

function incrementar47497() {
  base.value++;
}
</script>
