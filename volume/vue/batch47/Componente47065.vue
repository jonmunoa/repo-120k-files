<template>
  <section class="panel-47065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47065");
const base = ref(47065);
const total = computed(() => base.value * 2);

function incrementar47065() {
  base.value++;
}
</script>
