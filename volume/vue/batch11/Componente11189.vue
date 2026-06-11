<template>
  <section class="panel-11189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11189");
const base = ref(11189);
const total = computed(() => base.value * 2);

function incrementar11189() {
  base.value++;
}
</script>
