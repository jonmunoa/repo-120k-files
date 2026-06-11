<template>
  <section class="panel-47133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47133");
const base = ref(47133);
const total = computed(() => base.value * 2);

function incrementar47133() {
  base.value++;
}
</script>
