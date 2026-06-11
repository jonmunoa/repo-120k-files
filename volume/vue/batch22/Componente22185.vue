<template>
  <section class="panel-22185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22185");
const base = ref(22185);
const total = computed(() => base.value * 2);

function incrementar22185() {
  base.value++;
}
</script>
