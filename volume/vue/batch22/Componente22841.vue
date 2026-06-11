<template>
  <section class="panel-22841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22841");
const base = ref(22841);
const total = computed(() => base.value * 2);

function incrementar22841() {
  base.value++;
}
</script>
