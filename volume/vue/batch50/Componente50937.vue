<template>
  <section class="panel-50937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50937");
const base = ref(50937);
const total = computed(() => base.value * 2);

function incrementar50937() {
  base.value++;
}
</script>
