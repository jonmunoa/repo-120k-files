<template>
  <section class="panel-35969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35969");
const base = ref(35969);
const total = computed(() => base.value * 2);

function incrementar35969() {
  base.value++;
}
</script>
