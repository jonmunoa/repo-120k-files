<template>
  <section class="panel-48609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48609");
const base = ref(48609);
const total = computed(() => base.value * 2);

function incrementar48609() {
  base.value++;
}
</script>
