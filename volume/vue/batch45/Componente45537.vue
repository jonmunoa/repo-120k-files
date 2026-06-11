<template>
  <section class="panel-45537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45537");
const base = ref(45537);
const total = computed(() => base.value * 2);

function incrementar45537() {
  base.value++;
}
</script>
