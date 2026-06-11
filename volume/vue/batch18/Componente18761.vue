<template>
  <section class="panel-18761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18761");
const base = ref(18761);
const total = computed(() => base.value * 2);

function incrementar18761() {
  base.value++;
}
</script>
