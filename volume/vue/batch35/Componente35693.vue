<template>
  <section class="panel-35693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35693");
const base = ref(35693);
const total = computed(() => base.value * 2);

function incrementar35693() {
  base.value++;
}
</script>
