<template>
  <section class="panel-36905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36905");
const base = ref(36905);
const total = computed(() => base.value * 2);

function incrementar36905() {
  base.value++;
}
</script>
