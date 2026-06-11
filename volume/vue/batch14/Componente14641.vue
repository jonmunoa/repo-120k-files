<template>
  <section class="panel-14641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14641");
const base = ref(14641);
const total = computed(() => base.value * 2);

function incrementar14641() {
  base.value++;
}
</script>
