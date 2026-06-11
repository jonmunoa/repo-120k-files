<template>
  <section class="panel-22849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22849");
const base = ref(22849);
const total = computed(() => base.value * 2);

function incrementar22849() {
  base.value++;
}
</script>
