<template>
  <section class="panel-29261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29261");
const base = ref(29261);
const total = computed(() => base.value * 2);

function incrementar29261() {
  base.value++;
}
</script>
