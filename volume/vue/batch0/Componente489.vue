<template>
  <section class="panel-489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 489");
const base = ref(489);
const total = computed(() => base.value * 2);

function incrementar489() {
  base.value++;
}
</script>
