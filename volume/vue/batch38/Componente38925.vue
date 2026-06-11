<template>
  <section class="panel-38925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38925");
const base = ref(38925);
const total = computed(() => base.value * 2);

function incrementar38925() {
  base.value++;
}
</script>
