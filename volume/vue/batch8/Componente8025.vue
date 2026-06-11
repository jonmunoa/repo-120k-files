<template>
  <section class="panel-8025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8025");
const base = ref(8025);
const total = computed(() => base.value * 2);

function incrementar8025() {
  base.value++;
}
</script>
