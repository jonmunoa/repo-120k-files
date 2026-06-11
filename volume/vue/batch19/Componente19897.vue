<template>
  <section class="panel-19897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19897");
const base = ref(19897);
const total = computed(() => base.value * 2);

function incrementar19897() {
  base.value++;
}
</script>
