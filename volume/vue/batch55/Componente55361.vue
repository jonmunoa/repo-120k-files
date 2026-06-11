<template>
  <section class="panel-55361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55361");
const base = ref(55361);
const total = computed(() => base.value * 2);

function incrementar55361() {
  base.value++;
}
</script>
