<template>
  <section class="panel-34337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34337");
const base = ref(34337);
const total = computed(() => base.value * 2);

function incrementar34337() {
  base.value++;
}
</script>
