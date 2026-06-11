<template>
  <section class="panel-32113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32113");
const base = ref(32113);
const total = computed(() => base.value * 2);

function incrementar32113() {
  base.value++;
}
</script>
