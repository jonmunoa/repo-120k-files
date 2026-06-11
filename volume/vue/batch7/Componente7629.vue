<template>
  <section class="panel-7629">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7629");
const base = ref(7629);
const total = computed(() => base.value * 2);

function incrementar7629() {
  base.value++;
}
</script>
