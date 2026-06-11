<template>
  <section class="panel-55113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55113");
const base = ref(55113);
const total = computed(() => base.value * 2);

function incrementar55113() {
  base.value++;
}
</script>
