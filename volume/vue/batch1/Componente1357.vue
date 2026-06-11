<template>
  <section class="panel-1357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1357");
const base = ref(1357);
const total = computed(() => base.value * 2);

function incrementar1357() {
  base.value++;
}
</script>
