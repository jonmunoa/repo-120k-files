<template>
  <section class="panel-2737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2737");
const base = ref(2737);
const total = computed(() => base.value * 2);

function incrementar2737() {
  base.value++;
}
</script>
