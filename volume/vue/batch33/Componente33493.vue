<template>
  <section class="panel-33493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33493");
const base = ref(33493);
const total = computed(() => base.value * 2);

function incrementar33493() {
  base.value++;
}
</script>
