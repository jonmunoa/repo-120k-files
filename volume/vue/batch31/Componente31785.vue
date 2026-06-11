<template>
  <section class="panel-31785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31785");
const base = ref(31785);
const total = computed(() => base.value * 2);

function incrementar31785() {
  base.value++;
}
</script>
