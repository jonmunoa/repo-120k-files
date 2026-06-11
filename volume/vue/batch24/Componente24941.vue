<template>
  <section class="panel-24941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24941");
const base = ref(24941);
const total = computed(() => base.value * 2);

function incrementar24941() {
  base.value++;
}
</script>
