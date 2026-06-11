<template>
  <section class="panel-50429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50429");
const base = ref(50429);
const total = computed(() => base.value * 2);

function incrementar50429() {
  base.value++;
}
</script>
