<template>
  <section class="panel-17921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17921");
const base = ref(17921);
const total = computed(() => base.value * 2);

function incrementar17921() {
  base.value++;
}
</script>
