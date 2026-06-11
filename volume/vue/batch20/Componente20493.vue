<template>
  <section class="panel-20493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20493");
const base = ref(20493);
const total = computed(() => base.value * 2);

function incrementar20493() {
  base.value++;
}
</script>
