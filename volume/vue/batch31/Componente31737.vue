<template>
  <section class="panel-31737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31737");
const base = ref(31737);
const total = computed(() => base.value * 2);

function incrementar31737() {
  base.value++;
}
</script>
