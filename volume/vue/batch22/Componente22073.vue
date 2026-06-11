<template>
  <section class="panel-22073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22073");
const base = ref(22073);
const total = computed(() => base.value * 2);

function incrementar22073() {
  base.value++;
}
</script>
