<template>
  <section class="panel-17681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17681");
const base = ref(17681);
const total = computed(() => base.value * 2);

function incrementar17681() {
  base.value++;
}
</script>
