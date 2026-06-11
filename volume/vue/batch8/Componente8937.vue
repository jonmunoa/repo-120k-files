<template>
  <section class="panel-8937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8937");
const base = ref(8937);
const total = computed(() => base.value * 2);

function incrementar8937() {
  base.value++;
}
</script>
