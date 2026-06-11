<template>
  <section class="panel-9425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9425");
const base = ref(9425);
const total = computed(() => base.value * 2);

function incrementar9425() {
  base.value++;
}
</script>
