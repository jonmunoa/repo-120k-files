<template>
  <section class="panel-5689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5689");
const base = ref(5689);
const total = computed(() => base.value * 2);

function incrementar5689() {
  base.value++;
}
</script>
