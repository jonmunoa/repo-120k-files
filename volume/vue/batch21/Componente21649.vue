<template>
  <section class="panel-21649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21649");
const base = ref(21649);
const total = computed(() => base.value * 2);

function incrementar21649() {
  base.value++;
}
</script>
