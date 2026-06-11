<template>
  <section class="panel-35141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35141");
const base = ref(35141);
const total = computed(() => base.value * 2);

function incrementar35141() {
  base.value++;
}
</script>
