<template>
  <section class="panel-41025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41025");
const base = ref(41025);
const total = computed(() => base.value * 2);

function incrementar41025() {
  base.value++;
}
</script>
