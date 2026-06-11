<template>
  <section class="panel-13841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13841");
const base = ref(13841);
const total = computed(() => base.value * 2);

function incrementar13841() {
  base.value++;
}
</script>
