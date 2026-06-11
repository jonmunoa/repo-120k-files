<template>
  <section class="panel-22869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22869");
const base = ref(22869);
const total = computed(() => base.value * 2);

function incrementar22869() {
  base.value++;
}
</script>
