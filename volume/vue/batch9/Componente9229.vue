<template>
  <section class="panel-9229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9229");
const base = ref(9229);
const total = computed(() => base.value * 2);

function incrementar9229() {
  base.value++;
}
</script>
