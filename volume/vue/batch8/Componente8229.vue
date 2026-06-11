<template>
  <section class="panel-8229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8229");
const base = ref(8229);
const total = computed(() => base.value * 2);

function incrementar8229() {
  base.value++;
}
</script>
