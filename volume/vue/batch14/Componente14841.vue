<template>
  <section class="panel-14841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14841");
const base = ref(14841);
const total = computed(() => base.value * 2);

function incrementar14841() {
  base.value++;
}
</script>
