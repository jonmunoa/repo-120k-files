<template>
  <section class="panel-47009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47009");
const base = ref(47009);
const total = computed(() => base.value * 2);

function incrementar47009() {
  base.value++;
}
</script>
