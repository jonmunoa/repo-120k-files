<template>
  <section class="panel-13425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13425");
const base = ref(13425);
const total = computed(() => base.value * 2);

function incrementar13425() {
  base.value++;
}
</script>
