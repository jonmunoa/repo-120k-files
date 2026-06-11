<template>
  <section class="panel-8245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8245");
const base = ref(8245);
const total = computed(() => base.value * 2);

function incrementar8245() {
  base.value++;
}
</script>
