<template>
  <section class="panel-54493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54493");
const base = ref(54493);
const total = computed(() => base.value * 2);

function incrementar54493() {
  base.value++;
}
</script>
