<template>
  <section class="panel-2785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2785");
const base = ref(2785);
const total = computed(() => base.value * 2);

function incrementar2785() {
  base.value++;
}
</script>
