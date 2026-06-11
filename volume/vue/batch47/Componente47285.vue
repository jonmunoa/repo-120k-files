<template>
  <section class="panel-47285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47285");
const base = ref(47285);
const total = computed(() => base.value * 2);

function incrementar47285() {
  base.value++;
}
</script>
