<template>
  <section class="panel-47425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47425");
const base = ref(47425);
const total = computed(() => base.value * 2);

function incrementar47425() {
  base.value++;
}
</script>
