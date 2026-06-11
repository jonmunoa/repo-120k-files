<template>
  <section class="panel-24905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24905");
const base = ref(24905);
const total = computed(() => base.value * 2);

function incrementar24905() {
  base.value++;
}
</script>
