<template>
  <section class="panel-48261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48261");
const base = ref(48261);
const total = computed(() => base.value * 2);

function incrementar48261() {
  base.value++;
}
</script>
