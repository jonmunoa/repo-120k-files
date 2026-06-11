<template>
  <section class="panel-15009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15009");
const base = ref(15009);
const total = computed(() => base.value * 2);

function incrementar15009() {
  base.value++;
}
</script>
