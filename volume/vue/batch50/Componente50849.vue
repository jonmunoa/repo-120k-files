<template>
  <section class="panel-50849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50849");
const base = ref(50849);
const total = computed(() => base.value * 2);

function incrementar50849() {
  base.value++;
}
</script>
