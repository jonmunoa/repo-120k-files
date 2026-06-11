<template>
  <section class="panel-35813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35813");
const base = ref(35813);
const total = computed(() => base.value * 2);

function incrementar35813() {
  base.value++;
}
</script>
