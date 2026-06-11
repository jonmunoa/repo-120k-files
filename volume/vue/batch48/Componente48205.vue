<template>
  <section class="panel-48205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48205");
const base = ref(48205);
const total = computed(() => base.value * 2);

function incrementar48205() {
  base.value++;
}
</script>
