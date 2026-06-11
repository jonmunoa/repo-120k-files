<template>
  <section class="panel-35337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35337");
const base = ref(35337);
const total = computed(() => base.value * 2);

function incrementar35337() {
  base.value++;
}
</script>
