<template>
  <section class="panel-37681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37681");
const base = ref(37681);
const total = computed(() => base.value * 2);

function incrementar37681() {
  base.value++;
}
</script>
