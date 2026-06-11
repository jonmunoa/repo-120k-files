<template>
  <section class="panel-53681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53681");
const base = ref(53681);
const total = computed(() => base.value * 2);

function incrementar53681() {
  base.value++;
}
</script>
