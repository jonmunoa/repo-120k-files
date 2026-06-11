<template>
  <section class="panel-31205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31205");
const base = ref(31205);
const total = computed(() => base.value * 2);

function incrementar31205() {
  base.value++;
}
</script>
