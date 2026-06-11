<template>
  <section class="panel-35353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35353");
const base = ref(35353);
const total = computed(() => base.value * 2);

function incrementar35353() {
  base.value++;
}
</script>
