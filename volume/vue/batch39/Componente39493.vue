<template>
  <section class="panel-39493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39493");
const base = ref(39493);
const total = computed(() => base.value * 2);

function incrementar39493() {
  base.value++;
}
</script>
