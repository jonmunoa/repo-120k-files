<template>
  <section class="panel-18641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18641");
const base = ref(18641);
const total = computed(() => base.value * 2);

function incrementar18641() {
  base.value++;
}
</script>
