<template>
  <section class="panel-42905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42905");
const base = ref(42905);
const total = computed(() => base.value * 2);

function incrementar42905() {
  base.value++;
}
</script>
