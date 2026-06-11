<template>
  <section class="panel-44897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44897");
const base = ref(44897);
const total = computed(() => base.value * 2);

function incrementar44897() {
  base.value++;
}
</script>
