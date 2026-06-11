<template>
  <section class="panel-52009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52009");
const base = ref(52009);
const total = computed(() => base.value * 2);

function incrementar52009() {
  base.value++;
}
</script>
