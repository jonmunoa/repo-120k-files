<template>
  <section class="panel-14905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14905");
const base = ref(14905);
const total = computed(() => base.value * 2);

function incrementar14905() {
  base.value++;
}
</script>
