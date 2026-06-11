<template>
  <section class="panel-27089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27089");
const base = ref(27089);
const total = computed(() => base.value * 2);

function incrementar27089() {
  base.value++;
}
</script>
