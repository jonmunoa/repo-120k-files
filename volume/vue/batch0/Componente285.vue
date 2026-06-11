<template>
  <section class="panel-285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 285");
const base = ref(285);
const total = computed(() => base.value * 2);

function incrementar285() {
  base.value++;
}
</script>
