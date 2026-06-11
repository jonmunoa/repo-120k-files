<template>
  <section class="panel-25641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25641");
const base = ref(25641);
const total = computed(() => base.value * 2);

function incrementar25641() {
  base.value++;
}
</script>
