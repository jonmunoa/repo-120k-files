<template>
  <section class="panel-55277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55277");
const base = ref(55277);
const total = computed(() => base.value * 2);

function incrementar55277() {
  base.value++;
}
</script>
