<template>
  <section class="panel-1245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1245");
const base = ref(1245);
const total = computed(() => base.value * 2);

function incrementar1245() {
  base.value++;
}
</script>
