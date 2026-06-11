<template>
  <section class="panel-34949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34949");
const base = ref(34949);
const total = computed(() => base.value * 2);

function incrementar34949() {
  base.value++;
}
</script>
