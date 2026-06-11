<template>
  <section class="panel-34317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34317");
const base = ref(34317);
const total = computed(() => base.value * 2);

function incrementar34317() {
  base.value++;
}
</script>
