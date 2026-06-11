<template>
  <section class="panel-8681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8681");
const base = ref(8681);
const total = computed(() => base.value * 2);

function incrementar8681() {
  base.value++;
}
</script>
