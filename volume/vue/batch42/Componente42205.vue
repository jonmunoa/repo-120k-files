<template>
  <section class="panel-42205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42205");
const base = ref(42205);
const total = computed(() => base.value * 2);

function incrementar42205() {
  base.value++;
}
</script>
