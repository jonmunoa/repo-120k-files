<template>
  <section class="panel-3737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3737");
const base = ref(3737);
const total = computed(() => base.value * 2);

function incrementar3737() {
  base.value++;
}
</script>
