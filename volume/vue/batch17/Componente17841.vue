<template>
  <section class="panel-17841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17841");
const base = ref(17841);
const total = computed(() => base.value * 2);

function incrementar17841() {
  base.value++;
}
</script>
