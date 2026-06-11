<template>
  <section class="panel-45285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45285");
const base = ref(45285);
const total = computed(() => base.value * 2);

function incrementar45285() {
  base.value++;
}
</script>
