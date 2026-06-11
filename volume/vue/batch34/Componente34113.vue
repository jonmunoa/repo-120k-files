<template>
  <section class="panel-34113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34113");
const base = ref(34113);
const total = computed(() => base.value * 2);

function incrementar34113() {
  base.value++;
}
</script>
