<template>
  <section class="panel-737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 737");
const base = ref(737);
const total = computed(() => base.value * 2);

function incrementar737() {
  base.value++;
}
</script>
