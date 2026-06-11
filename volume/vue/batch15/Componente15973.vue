<template>
  <section class="panel-15973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15973");
const base = ref(15973);
const total = computed(() => base.value * 2);

function incrementar15973() {
  base.value++;
}
</script>
