<template>
  <section class="panel-35125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35125");
const base = ref(35125);
const total = computed(() => base.value * 2);

function incrementar35125() {
  base.value++;
}
</script>
