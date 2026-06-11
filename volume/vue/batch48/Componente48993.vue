<template>
  <section class="panel-48993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48993");
const base = ref(48993);
const total = computed(() => base.value * 2);

function incrementar48993() {
  base.value++;
}
</script>
