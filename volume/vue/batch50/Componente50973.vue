<template>
  <section class="panel-50973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50973");
const base = ref(50973);
const total = computed(() => base.value * 2);

function incrementar50973() {
  base.value++;
}
</script>
