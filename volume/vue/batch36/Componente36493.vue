<template>
  <section class="panel-36493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36493");
const base = ref(36493);
const total = computed(() => base.value * 2);

function incrementar36493() {
  base.value++;
}
</script>
