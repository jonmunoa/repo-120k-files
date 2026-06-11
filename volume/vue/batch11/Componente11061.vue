<template>
  <section class="panel-11061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11061");
const base = ref(11061);
const total = computed(() => base.value * 2);

function incrementar11061() {
  base.value++;
}
</script>
