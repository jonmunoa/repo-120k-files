<template>
  <section class="panel-14301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14301");
const base = ref(14301);
const total = computed(() => base.value * 2);

function incrementar14301() {
  base.value++;
}
</script>
