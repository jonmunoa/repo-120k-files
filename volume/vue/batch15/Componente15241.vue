<template>
  <section class="panel-15241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15241");
const base = ref(15241);
const total = computed(() => base.value * 2);

function incrementar15241() {
  base.value++;
}
</script>
