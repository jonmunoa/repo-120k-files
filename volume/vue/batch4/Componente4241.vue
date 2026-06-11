<template>
  <section class="panel-4241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4241");
const base = ref(4241);
const total = computed(() => base.value * 2);

function incrementar4241() {
  base.value++;
}
</script>
