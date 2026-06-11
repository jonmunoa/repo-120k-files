<template>
  <section class="panel-56897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56897");
const base = ref(56897);
const total = computed(() => base.value * 2);

function incrementar56897() {
  base.value++;
}
</script>
