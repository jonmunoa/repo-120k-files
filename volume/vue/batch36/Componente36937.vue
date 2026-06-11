<template>
  <section class="panel-36937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36937");
const base = ref(36937);
const total = computed(() => base.value * 2);

function incrementar36937() {
  base.value++;
}
</script>
