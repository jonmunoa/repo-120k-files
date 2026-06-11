<template>
  <section class="panel-35537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35537");
const base = ref(35537);
const total = computed(() => base.value * 2);

function incrementar35537() {
  base.value++;
}
</script>
