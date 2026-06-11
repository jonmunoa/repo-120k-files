<template>
  <section class="panel-5425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5425");
const base = ref(5425);
const total = computed(() => base.value * 2);

function incrementar5425() {
  base.value++;
}
</script>
