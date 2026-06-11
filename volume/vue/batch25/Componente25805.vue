<template>
  <section class="panel-25805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25805");
const base = ref(25805);
const total = computed(() => base.value * 2);

function incrementar25805() {
  base.value++;
}
</script>
