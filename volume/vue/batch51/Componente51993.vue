<template>
  <section class="panel-51993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51993");
const base = ref(51993);
const total = computed(() => base.value * 2);

function incrementar51993() {
  base.value++;
}
</script>
