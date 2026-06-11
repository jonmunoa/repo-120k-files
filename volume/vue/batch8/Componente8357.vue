<template>
  <section class="panel-8357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8357");
const base = ref(8357);
const total = computed(() => base.value * 2);

function incrementar8357() {
  base.value++;
}
</script>
