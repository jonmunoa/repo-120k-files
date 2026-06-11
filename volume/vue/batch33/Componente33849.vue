<template>
  <section class="panel-33849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33849");
const base = ref(33849);
const total = computed(() => base.value * 2);

function incrementar33849() {
  base.value++;
}
</script>
