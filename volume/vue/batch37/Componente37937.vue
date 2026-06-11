<template>
  <section class="panel-37937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37937");
const base = ref(37937);
const total = computed(() => base.value * 2);

function incrementar37937() {
  base.value++;
}
</script>
