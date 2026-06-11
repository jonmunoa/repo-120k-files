<template>
  <section class="panel-25113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25113");
const base = ref(25113);
const total = computed(() => base.value * 2);

function incrementar25113() {
  base.value++;
}
</script>
