<template>
  <section class="panel-45021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45021");
const base = ref(45021);
const total = computed(() => base.value * 2);

function incrementar45021() {
  base.value++;
}
</script>
