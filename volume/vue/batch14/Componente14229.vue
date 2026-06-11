<template>
  <section class="panel-14229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14229");
const base = ref(14229);
const total = computed(() => base.value * 2);

function incrementar14229() {
  base.value++;
}
</script>
