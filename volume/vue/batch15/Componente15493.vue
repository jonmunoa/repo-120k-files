<template>
  <section class="panel-15493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15493");
const base = ref(15493);
const total = computed(() => base.value * 2);

function incrementar15493() {
  base.value++;
}
</script>
