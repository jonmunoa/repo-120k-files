<template>
  <section class="panel-18201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18201");
const base = ref(18201);
const total = computed(() => base.value * 2);

function incrementar18201() {
  base.value++;
}
</script>
