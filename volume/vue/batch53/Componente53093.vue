<template>
  <section class="panel-53093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53093");
const base = ref(53093);
const total = computed(() => base.value * 2);

function incrementar53093() {
  base.value++;
}
</script>
