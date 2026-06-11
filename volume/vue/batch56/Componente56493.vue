<template>
  <section class="panel-56493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56493");
const base = ref(56493);
const total = computed(() => base.value * 2);

function incrementar56493() {
  base.value++;
}
</script>
