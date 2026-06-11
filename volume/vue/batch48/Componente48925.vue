<template>
  <section class="panel-48925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48925");
const base = ref(48925);
const total = computed(() => base.value * 2);

function incrementar48925() {
  base.value++;
}
</script>
