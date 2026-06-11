<template>
  <section class="panel-9849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9849");
const base = ref(9849);
const total = computed(() => base.value * 2);

function incrementar9849() {
  base.value++;
}
</script>
