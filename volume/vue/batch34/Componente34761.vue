<template>
  <section class="panel-34761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34761");
const base = ref(34761);
const total = computed(() => base.value * 2);

function incrementar34761() {
  base.value++;
}
</script>
