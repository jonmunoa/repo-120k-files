<template>
  <section class="panel-18937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18937");
const base = ref(18937);
const total = computed(() => base.value * 2);

function incrementar18937() {
  base.value++;
}
</script>
