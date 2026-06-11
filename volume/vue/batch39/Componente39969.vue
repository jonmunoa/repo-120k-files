<template>
  <section class="panel-39969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39969");
const base = ref(39969);
const total = computed(() => base.value * 2);

function incrementar39969() {
  base.value++;
}
</script>
