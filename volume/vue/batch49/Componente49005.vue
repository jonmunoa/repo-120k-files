<template>
  <section class="panel-49005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49005");
const base = ref(49005);
const total = computed(() => base.value * 2);

function incrementar49005() {
  base.value++;
}
</script>
