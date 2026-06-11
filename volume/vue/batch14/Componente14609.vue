<template>
  <section class="panel-14609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14609");
const base = ref(14609);
const total = computed(() => base.value * 2);

function incrementar14609() {
  base.value++;
}
</script>
