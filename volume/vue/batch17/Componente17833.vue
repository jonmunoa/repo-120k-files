<template>
  <section class="panel-17833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17833");
const base = ref(17833);
const total = computed(() => base.value * 2);

function incrementar17833() {
  base.value++;
}
</script>
