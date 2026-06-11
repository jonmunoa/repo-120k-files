<template>
  <section class="panel-7277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7277");
const base = ref(7277);
const total = computed(() => base.value * 2);

function incrementar7277() {
  base.value++;
}
</script>
