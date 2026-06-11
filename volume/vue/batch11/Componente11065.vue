<template>
  <section class="panel-11065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11065");
const base = ref(11065);
const total = computed(() => base.value * 2);

function incrementar11065() {
  base.value++;
}
</script>
