<template>
  <section class="panel-905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 905");
const base = ref(905);
const total = computed(() => base.value * 2);

function incrementar905() {
  base.value++;
}
</script>
