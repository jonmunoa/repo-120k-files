<template>
  <section class="panel-2761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2761");
const base = ref(2761);
const total = computed(() => base.value * 2);

function incrementar2761() {
  base.value++;
}
</script>
