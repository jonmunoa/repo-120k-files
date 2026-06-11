<template>
  <section class="panel-48721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48721");
const base = ref(48721);
const total = computed(() => base.value * 2);

function incrementar48721() {
  base.value++;
}
</script>
