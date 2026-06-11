<template>
  <section class="panel-37009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37009");
const base = ref(37009);
const total = computed(() => base.value * 2);

function incrementar37009() {
  base.value++;
}
</script>
