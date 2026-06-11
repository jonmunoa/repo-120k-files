<template>
  <section class="panel-38761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38761");
const base = ref(38761);
const total = computed(() => base.value * 2);

function incrementar38761() {
  base.value++;
}
</script>
