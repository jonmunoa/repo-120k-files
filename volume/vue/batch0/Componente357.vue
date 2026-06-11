<template>
  <section class="panel-357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 357");
const base = ref(357);
const total = computed(() => base.value * 2);

function incrementar357() {
  base.value++;
}
</script>
