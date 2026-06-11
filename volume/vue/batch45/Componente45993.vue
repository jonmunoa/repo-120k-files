<template>
  <section class="panel-45993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45993");
const base = ref(45993);
const total = computed(() => base.value * 2);

function incrementar45993() {
  base.value++;
}
</script>
