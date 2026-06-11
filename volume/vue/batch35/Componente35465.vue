<template>
  <section class="panel-35465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35465");
const base = ref(35465);
const total = computed(() => base.value * 2);

function incrementar35465() {
  base.value++;
}
</script>
