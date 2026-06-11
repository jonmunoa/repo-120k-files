<template>
  <section class="panel-34065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34065");
const base = ref(34065);
const total = computed(() => base.value * 2);

function incrementar34065() {
  base.value++;
}
</script>
