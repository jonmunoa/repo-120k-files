<template>
  <section class="panel-24913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24913");
const base = ref(24913);
const total = computed(() => base.value * 2);

function incrementar24913() {
  base.value++;
}
</script>
