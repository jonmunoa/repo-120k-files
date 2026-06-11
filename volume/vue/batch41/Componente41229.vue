<template>
  <section class="panel-41229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41229");
const base = ref(41229);
const total = computed(() => base.value * 2);

function incrementar41229() {
  base.value++;
}
</script>
