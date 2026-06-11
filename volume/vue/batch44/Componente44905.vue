<template>
  <section class="panel-44905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44905");
const base = ref(44905);
const total = computed(() => base.value * 2);

function incrementar44905() {
  base.value++;
}
</script>
