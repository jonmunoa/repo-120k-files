<template>
  <section class="panel-32737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32737");
const base = ref(32737);
const total = computed(() => base.value * 2);

function incrementar32737() {
  base.value++;
}
</script>
