<template>
  <section class="panel-55401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55401");
const base = ref(55401);
const total = computed(() => base.value * 2);

function incrementar55401() {
  base.value++;
}
</script>
