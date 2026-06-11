<template>
  <section class="panel-53657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53657");
const base = ref(53657);
const total = computed(() => base.value * 2);

function incrementar53657() {
  base.value++;
}
</script>
