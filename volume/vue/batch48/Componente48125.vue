<template>
  <section class="panel-48125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48125");
const base = ref(48125);
const total = computed(() => base.value * 2);

function incrementar48125() {
  base.value++;
}
</script>
