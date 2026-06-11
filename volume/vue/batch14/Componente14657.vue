<template>
  <section class="panel-14657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14657");
const base = ref(14657);
const total = computed(() => base.value * 2);

function incrementar14657() {
  base.value++;
}
</script>
