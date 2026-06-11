<template>
  <section class="panel-47549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47549");
const base = ref(47549);
const total = computed(() => base.value * 2);

function incrementar47549() {
  base.value++;
}
</script>
