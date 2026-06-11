<template>
  <section class="panel-56937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56937");
const base = ref(56937);
const total = computed(() => base.value * 2);

function incrementar56937() {
  base.value++;
}
</script>
