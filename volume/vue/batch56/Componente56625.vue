<template>
  <section class="panel-56625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56625");
const base = ref(56625);
const total = computed(() => base.value * 2);

function incrementar56625() {
  base.value++;
}
</script>
