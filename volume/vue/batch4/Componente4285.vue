<template>
  <section class="panel-4285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4285");
const base = ref(4285);
const total = computed(() => base.value * 2);

function incrementar4285() {
  base.value++;
}
</script>
