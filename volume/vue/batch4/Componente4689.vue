<template>
  <section class="panel-4689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4689");
const base = ref(4689);
const total = computed(() => base.value * 2);

function incrementar4689() {
  base.value++;
}
</script>
