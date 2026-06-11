<template>
  <section class="panel-53661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53661");
const base = ref(53661);
const total = computed(() => base.value * 2);

function incrementar53661() {
  base.value++;
}
</script>
