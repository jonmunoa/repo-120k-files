<template>
  <section class="panel-35785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35785");
const base = ref(35785);
const total = computed(() => base.value * 2);

function incrementar35785() {
  base.value++;
}
</script>
