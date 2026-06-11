<template>
  <section class="panel-35241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35241");
const base = ref(35241);
const total = computed(() => base.value * 2);

function incrementar35241() {
  base.value++;
}
</script>
