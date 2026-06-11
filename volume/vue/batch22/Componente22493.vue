<template>
  <section class="panel-22493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22493");
const base = ref(22493);
const total = computed(() => base.value * 2);

function incrementar22493() {
  base.value++;
}
</script>
