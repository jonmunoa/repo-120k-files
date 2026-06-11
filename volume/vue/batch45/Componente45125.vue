<template>
  <section class="panel-45125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45125");
const base = ref(45125);
const total = computed(() => base.value * 2);

function incrementar45125() {
  base.value++;
}
</script>
