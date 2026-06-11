<template>
  <section class="panel-25533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25533");
const base = ref(25533);
const total = computed(() => base.value * 2);

function incrementar25533() {
  base.value++;
}
</script>
