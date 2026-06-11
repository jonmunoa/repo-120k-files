<template>
  <section class="panel-16609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16609");
const base = ref(16609);
const total = computed(() => base.value * 2);

function incrementar16609() {
  base.value++;
}
</script>
