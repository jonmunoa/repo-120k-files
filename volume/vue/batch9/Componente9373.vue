<template>
  <section class="panel-9373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9373");
const base = ref(9373);
const total = computed(() => base.value * 2);

function incrementar9373() {
  base.value++;
}
</script>
