<template>
  <section class="panel-38973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38973");
const base = ref(38973);
const total = computed(() => base.value * 2);

function incrementar38973() {
  base.value++;
}
</script>
