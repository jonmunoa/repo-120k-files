<template>
  <section class="panel-2401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2401");
const base = ref(2401);
const total = computed(() => base.value * 2);

function incrementar2401() {
  base.value++;
}
</script>
