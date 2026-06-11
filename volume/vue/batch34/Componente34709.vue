<template>
  <section class="panel-34709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34709");
const base = ref(34709);
const total = computed(() => base.value * 2);

function incrementar34709() {
  base.value++;
}
</script>
