<template>
  <section class="panel-53617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53617");
const base = ref(53617);
const total = computed(() => base.value * 2);

function incrementar53617() {
  base.value++;
}
</script>
