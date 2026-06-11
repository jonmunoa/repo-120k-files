<template>
  <section class="panel-48457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48457");
const base = ref(48457);
const total = computed(() => base.value * 2);

function incrementar48457() {
  base.value++;
}
</script>
