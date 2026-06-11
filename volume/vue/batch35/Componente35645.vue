<template>
  <section class="panel-35645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35645");
const base = ref(35645);
const total = computed(() => base.value * 2);

function incrementar35645() {
  base.value++;
}
</script>
