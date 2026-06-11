<template>
  <section class="panel-40593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40593");
const base = ref(40593);
const total = computed(() => base.value * 2);

function incrementar40593() {
  base.value++;
}
</script>
