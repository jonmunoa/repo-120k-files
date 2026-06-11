<template>
  <section class="panel-3493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3493");
const base = ref(3493);
const total = computed(() => base.value * 2);

function incrementar3493() {
  base.value++;
}
</script>
