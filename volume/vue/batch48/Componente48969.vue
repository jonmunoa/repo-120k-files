<template>
  <section class="panel-48969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48969");
const base = ref(48969);
const total = computed(() => base.value * 2);

function incrementar48969() {
  base.value++;
}
</script>
