<template>
  <section class="panel-7065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7065");
const base = ref(7065);
const total = computed(() => base.value * 2);

function incrementar7065() {
  base.value++;
}
</script>
