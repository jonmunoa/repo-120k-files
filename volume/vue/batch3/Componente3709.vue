<template>
  <section class="panel-3709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3709");
const base = ref(3709);
const total = computed(() => base.value * 2);

function incrementar3709() {
  base.value++;
}
</script>
