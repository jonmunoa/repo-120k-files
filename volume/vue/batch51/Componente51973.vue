<template>
  <section class="panel-51973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51973");
const base = ref(51973);
const total = computed(() => base.value * 2);

function incrementar51973() {
  base.value++;
}
</script>
