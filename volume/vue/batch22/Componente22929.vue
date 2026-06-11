<template>
  <section class="panel-22929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22929");
const base = ref(22929);
const total = computed(() => base.value * 2);

function incrementar22929() {
  base.value++;
}
</script>
