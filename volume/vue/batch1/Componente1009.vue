<template>
  <section class="panel-1009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1009");
const base = ref(1009);
const total = computed(() => base.value * 2);

function incrementar1009() {
  base.value++;
}
</script>
