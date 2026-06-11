<template>
  <section class="panel-53537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53537");
const base = ref(53537);
const total = computed(() => base.value * 2);

function incrementar53537() {
  base.value++;
}
</script>
