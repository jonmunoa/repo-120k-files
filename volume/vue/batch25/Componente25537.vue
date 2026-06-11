<template>
  <section class="panel-25537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25537");
const base = ref(25537);
const total = computed(() => base.value * 2);

function incrementar25537() {
  base.value++;
}
</script>
