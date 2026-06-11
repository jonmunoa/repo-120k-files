<template>
  <section class="panel-8089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8089");
const base = ref(8089);
const total = computed(() => base.value * 2);

function incrementar8089() {
  base.value++;
}
</script>
