<template>
  <section class="panel-51657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51657");
const base = ref(51657);
const total = computed(() => base.value * 2);

function incrementar51657() {
  base.value++;
}
</script>
