<template>
  <section class="panel-11833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11833");
const base = ref(11833);
const total = computed(() => base.value * 2);

function incrementar11833() {
  base.value++;
}
</script>
