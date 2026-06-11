<template>
  <section class="panel-38285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38285");
const base = ref(38285);
const total = computed(() => base.value * 2);

function incrementar38285() {
  base.value++;
}
</script>
