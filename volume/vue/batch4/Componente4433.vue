<template>
  <section class="panel-4433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4433");
const base = ref(4433);
const total = computed(() => base.value * 2);

function incrementar4433() {
  base.value++;
}
</script>
