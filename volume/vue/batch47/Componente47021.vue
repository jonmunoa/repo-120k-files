<template>
  <section class="panel-47021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47021");
const base = ref(47021);
const total = computed(() => base.value * 2);

function incrementar47021() {
  base.value++;
}
</script>
