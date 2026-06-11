<template>
  <section class="panel-40093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40093");
const base = ref(40093);
const total = computed(() => base.value * 2);

function incrementar40093() {
  base.value++;
}
</script>
