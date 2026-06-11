<template>
  <section class="panel-40249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40249");
const base = ref(40249);
const total = computed(() => base.value * 2);

function incrementar40249() {
  base.value++;
}
</script>
