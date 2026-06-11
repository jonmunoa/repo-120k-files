<template>
  <section class="panel-2245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2245");
const base = ref(2245);
const total = computed(() => base.value * 2);

function incrementar2245() {
  base.value++;
}
</script>
