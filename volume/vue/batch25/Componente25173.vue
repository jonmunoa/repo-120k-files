<template>
  <section class="panel-25173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25173");
const base = ref(25173);
const total = computed(() => base.value * 2);

function incrementar25173() {
  base.value++;
}
</script>
