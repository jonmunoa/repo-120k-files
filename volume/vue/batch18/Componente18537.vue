<template>
  <section class="panel-18537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18537");
const base = ref(18537);
const total = computed(() => base.value * 2);

function incrementar18537() {
  base.value++;
}
</script>
