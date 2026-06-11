<template>
  <section class="panel-24241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24241");
const base = ref(24241);
const total = computed(() => base.value * 2);

function incrementar24241() {
  base.value++;
}
</script>
