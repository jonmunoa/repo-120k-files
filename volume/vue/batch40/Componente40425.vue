<template>
  <section class="panel-40425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40425");
const base = ref(40425);
const total = computed(() => base.value * 2);

function incrementar40425() {
  base.value++;
}
</script>
