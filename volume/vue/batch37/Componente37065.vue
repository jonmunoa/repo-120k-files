<template>
  <section class="panel-37065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37065");
const base = ref(37065);
const total = computed(() => base.value * 2);

function incrementar37065() {
  base.value++;
}
</script>
