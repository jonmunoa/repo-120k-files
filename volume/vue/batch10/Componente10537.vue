<template>
  <section class="panel-10537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10537");
const base = ref(10537);
const total = computed(() => base.value * 2);

function incrementar10537() {
  base.value++;
}
</script>
