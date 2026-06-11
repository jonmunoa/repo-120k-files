<template>
  <section class="panel-35073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35073");
const base = ref(35073);
const total = computed(() => base.value * 2);

function incrementar35073() {
  base.value++;
}
</script>
