<template>
  <section class="panel-501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 501");
const base = ref(501);
const total = computed(() => base.value * 2);

function incrementar501() {
  base.value++;
}
</script>
