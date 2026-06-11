<template>
  <section class="panel-17677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17677");
const base = ref(17677);
const total = computed(() => base.value * 2);

function incrementar17677() {
  base.value++;
}
</script>
