<template>
  <section class="panel-41785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41785");
const base = ref(41785);
const total = computed(() => base.value * 2);

function incrementar41785() {
  base.value++;
}
</script>
