<template>
  <section class="panel-761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 761");
const base = ref(761);
const total = computed(() => base.value * 2);

function incrementar761() {
  base.value++;
}
</script>
