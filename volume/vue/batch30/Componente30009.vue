<template>
  <section class="panel-30009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30009");
const base = ref(30009);
const total = computed(() => base.value * 2);

function incrementar30009() {
  base.value++;
}
</script>
