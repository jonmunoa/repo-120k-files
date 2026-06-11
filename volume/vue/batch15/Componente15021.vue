<template>
  <section class="panel-15021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15021");
const base = ref(15021);
const total = computed(() => base.value * 2);

function incrementar15021() {
  base.value++;
}
</script>
