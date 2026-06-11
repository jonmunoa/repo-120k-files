<template>
  <section class="panel-55089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55089");
const base = ref(55089);
const total = computed(() => base.value * 2);

function incrementar55089() {
  base.value++;
}
</script>
