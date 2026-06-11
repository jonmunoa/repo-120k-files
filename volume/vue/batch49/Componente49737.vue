<template>
  <section class="panel-49737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49737");
const base = ref(49737);
const total = computed(() => base.value * 2);

function incrementar49737() {
  base.value++;
}
</script>
