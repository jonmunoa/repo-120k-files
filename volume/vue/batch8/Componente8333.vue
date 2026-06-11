<template>
  <section class="panel-8333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8333");
const base = ref(8333);
const total = computed(() => base.value * 2);

function incrementar8333() {
  base.value++;
}
</script>
