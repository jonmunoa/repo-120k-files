<template>
  <section class="panel-8477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8477");
const base = ref(8477);
const total = computed(() => base.value * 2);

function incrementar8477() {
  base.value++;
}
</script>
