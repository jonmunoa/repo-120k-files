<template>
  <section class="panel-48049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48049");
const base = ref(48049);
const total = computed(() => base.value * 2);

function incrementar48049() {
  base.value++;
}
</script>
