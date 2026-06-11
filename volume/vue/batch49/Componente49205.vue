<template>
  <section class="panel-49205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49205");
const base = ref(49205);
const total = computed(() => base.value * 2);

function incrementar49205() {
  base.value++;
}
</script>
