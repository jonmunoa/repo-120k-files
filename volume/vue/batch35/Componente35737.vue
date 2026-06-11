<template>
  <section class="panel-35737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35737");
const base = ref(35737);
const total = computed(() => base.value * 2);

function incrementar35737() {
  base.value++;
}
</script>
