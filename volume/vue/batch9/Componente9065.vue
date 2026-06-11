<template>
  <section class="panel-9065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9065");
const base = ref(9065);
const total = computed(() => base.value * 2);

function incrementar9065() {
  base.value++;
}
</script>
