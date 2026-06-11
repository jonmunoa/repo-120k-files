<template>
  <section class="panel-34241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34241");
const base = ref(34241);
const total = computed(() => base.value * 2);

function incrementar34241() {
  base.value++;
}
</script>
