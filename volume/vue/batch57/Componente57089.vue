<template>
  <section class="panel-57089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57089");
const base = ref(57089);
const total = computed(() => base.value * 2);

function incrementar57089() {
  base.value++;
}
</script>
