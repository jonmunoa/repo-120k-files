<template>
  <section class="panel-8905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8905");
const base = ref(8905);
const total = computed(() => base.value * 2);

function incrementar8905() {
  base.value++;
}
</script>
