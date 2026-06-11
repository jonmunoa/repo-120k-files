<template>
  <section class="panel-35121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35121");
const base = ref(35121);
const total = computed(() => base.value * 2);

function incrementar35121() {
  base.value++;
}
</script>
