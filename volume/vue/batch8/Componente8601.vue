<template>
  <section class="panel-8601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8601");
const base = ref(8601);
const total = computed(() => base.value * 2);

function incrementar8601() {
  base.value++;
}
</script>
