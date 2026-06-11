<template>
  <section class="panel-35641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35641");
const base = ref(35641);
const total = computed(() => base.value * 2);

function incrementar35641() {
  base.value++;
}
</script>
