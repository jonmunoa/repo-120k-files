<template>
  <section class="panel-48193">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48193");
const base = ref(48193);
const total = computed(() => base.value * 2);

function incrementar48193() {
  base.value++;
}
</script>
