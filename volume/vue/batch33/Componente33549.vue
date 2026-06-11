<template>
  <section class="panel-33549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33549");
const base = ref(33549);
const total = computed(() => base.value * 2);

function incrementar33549() {
  base.value++;
}
</script>
