<template>
  <section class="panel-24089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24089");
const base = ref(24089);
const total = computed(() => base.value * 2);

function incrementar24089() {
  base.value++;
}
</script>
