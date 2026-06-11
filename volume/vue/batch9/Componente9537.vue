<template>
  <section class="panel-9537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9537");
const base = ref(9537);
const total = computed(() => base.value * 2);

function incrementar9537() {
  base.value++;
}
</script>
