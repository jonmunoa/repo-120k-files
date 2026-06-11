<template>
  <section class="panel-22241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22241");
const base = ref(22241);
const total = computed(() => base.value * 2);

function incrementar22241() {
  base.value++;
}
</script>
