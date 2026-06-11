<template>
  <section class="panel-30277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30277");
const base = ref(30277);
const total = computed(() => base.value * 2);

function incrementar30277() {
  base.value++;
}
</script>
