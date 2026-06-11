<template>
  <section class="panel-4641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4641");
const base = ref(4641);
const total = computed(() => base.value * 2);

function incrementar4641() {
  base.value++;
}
</script>
