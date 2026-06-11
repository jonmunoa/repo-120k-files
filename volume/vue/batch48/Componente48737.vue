<template>
  <section class="panel-48737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48737");
const base = ref(48737);
const total = computed(() => base.value * 2);

function incrementar48737() {
  base.value++;
}
</script>
