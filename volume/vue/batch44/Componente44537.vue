<template>
  <section class="panel-44537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44537");
const base = ref(44537);
const total = computed(() => base.value * 2);

function incrementar44537() {
  base.value++;
}
</script>
