<template>
  <section class="panel-27681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27681");
const base = ref(27681);
const total = computed(() => base.value * 2);

function incrementar27681() {
  base.value++;
}
</script>
