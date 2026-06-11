<template>
  <section class="panel-38425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38425");
const base = ref(38425);
const total = computed(() => base.value * 2);

function incrementar38425() {
  base.value++;
}
</script>
