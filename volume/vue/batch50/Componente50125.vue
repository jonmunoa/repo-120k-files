<template>
  <section class="panel-50125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50125");
const base = ref(50125);
const total = computed(() => base.value * 2);

function incrementar50125() {
  base.value++;
}
</script>
