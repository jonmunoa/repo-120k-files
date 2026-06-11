<template>
  <section class="panel-40029">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40029");
const base = ref(40029);
const total = computed(() => base.value * 2);

function incrementar40029() {
  base.value++;
}
</script>
