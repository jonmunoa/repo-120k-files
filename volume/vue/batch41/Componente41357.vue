<template>
  <section class="panel-41357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41357");
const base = ref(41357);
const total = computed(() => base.value * 2);

function incrementar41357() {
  base.value++;
}
</script>
