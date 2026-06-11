<template>
  <section class="panel-55673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55673");
const base = ref(55673);
const total = computed(() => base.value * 2);

function incrementar55673() {
  base.value++;
}
</script>
