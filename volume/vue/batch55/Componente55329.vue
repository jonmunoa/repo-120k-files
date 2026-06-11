<template>
  <section class="panel-55329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55329");
const base = ref(55329);
const total = computed(() => base.value * 2);

function incrementar55329() {
  base.value++;
}
</script>
