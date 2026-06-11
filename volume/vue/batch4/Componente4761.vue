<template>
  <section class="panel-4761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4761");
const base = ref(4761);
const total = computed(() => base.value * 2);

function incrementar4761() {
  base.value++;
}
</script>
