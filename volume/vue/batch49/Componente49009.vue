<template>
  <section class="panel-49009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49009");
const base = ref(49009);
const total = computed(() => base.value * 2);

function incrementar49009() {
  base.value++;
}
</script>
