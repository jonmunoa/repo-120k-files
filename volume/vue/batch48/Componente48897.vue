<template>
  <section class="panel-48897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48897");
const base = ref(48897);
const total = computed(() => base.value * 2);

function incrementar48897() {
  base.value++;
}
</script>
