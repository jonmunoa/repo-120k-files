<template>
  <section class="panel-39413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39413");
const base = ref(39413);
const total = computed(() => base.value * 2);

function incrementar39413() {
  base.value++;
}
</script>
