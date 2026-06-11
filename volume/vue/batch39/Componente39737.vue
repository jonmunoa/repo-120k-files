<template>
  <section class="panel-39737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39737");
const base = ref(39737);
const total = computed(() => base.value * 2);

function incrementar39737() {
  base.value++;
}
</script>
