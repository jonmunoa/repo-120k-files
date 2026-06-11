<template>
  <section class="panel-25693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25693");
const base = ref(25693);
const total = computed(() => base.value * 2);

function incrementar25693() {
  base.value++;
}
</script>
