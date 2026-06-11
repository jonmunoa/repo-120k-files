<template>
  <section class="panel-35417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35417");
const base = ref(35417);
const total = computed(() => base.value * 2);

function incrementar35417() {
  base.value++;
}
</script>
