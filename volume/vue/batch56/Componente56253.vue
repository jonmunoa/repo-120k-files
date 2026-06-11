<template>
  <section class="panel-56253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56253");
const base = ref(56253);
const total = computed(() => base.value * 2);

function incrementar56253() {
  base.value++;
}
</script>
