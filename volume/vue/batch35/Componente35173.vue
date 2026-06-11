<template>
  <section class="panel-35173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35173");
const base = ref(35173);
const total = computed(() => base.value * 2);

function incrementar35173() {
  base.value++;
}
</script>
