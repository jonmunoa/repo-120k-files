<template>
  <section class="panel-56737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56737");
const base = ref(56737);
const total = computed(() => base.value * 2);

function incrementar56737() {
  base.value++;
}
</script>
