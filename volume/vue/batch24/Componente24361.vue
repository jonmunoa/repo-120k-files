<template>
  <section class="panel-24361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24361");
const base = ref(24361);
const total = computed(() => base.value * 2);

function incrementar24361() {
  base.value++;
}
</script>
