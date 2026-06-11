<template>
  <section class="panel-17241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17241");
const base = ref(17241);
const total = computed(() => base.value * 2);

function incrementar17241() {
  base.value++;
}
</script>
