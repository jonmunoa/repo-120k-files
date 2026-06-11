<template>
  <section class="panel-45241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45241");
const base = ref(45241);
const total = computed(() => base.value * 2);

function incrementar45241() {
  base.value++;
}
</script>
