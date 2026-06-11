<template>
  <section class="panel-29905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29905");
const base = ref(29905);
const total = computed(() => base.value * 2);

function incrementar29905() {
  base.value++;
}
</script>
