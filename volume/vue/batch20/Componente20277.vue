<template>
  <section class="panel-20277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20277");
const base = ref(20277);
const total = computed(() => base.value * 2);

function incrementar20277() {
  base.value++;
}
</script>
