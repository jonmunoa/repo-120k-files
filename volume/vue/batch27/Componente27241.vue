<template>
  <section class="panel-27241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27241");
const base = ref(27241);
const total = computed(() => base.value * 2);

function incrementar27241() {
  base.value++;
}
</script>
