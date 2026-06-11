<template>
  <section class="panel-43905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43905");
const base = ref(43905);
const total = computed(() => base.value * 2);

function incrementar43905() {
  base.value++;
}
</script>
