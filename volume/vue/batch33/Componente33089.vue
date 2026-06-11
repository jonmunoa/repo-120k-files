<template>
  <section class="panel-33089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33089");
const base = ref(33089);
const total = computed(() => base.value * 2);

function incrementar33089() {
  base.value++;
}
</script>
