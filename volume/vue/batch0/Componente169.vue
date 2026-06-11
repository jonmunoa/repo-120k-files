<template>
  <section class="panel-169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 169");
const base = ref(169);
const total = computed(() => base.value * 2);

function incrementar169() {
  base.value++;
}
</script>
