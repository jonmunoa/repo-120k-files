<template>
  <section class="panel-7537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7537");
const base = ref(7537);
const total = computed(() => base.value * 2);

function incrementar7537() {
  base.value++;
}
</script>
