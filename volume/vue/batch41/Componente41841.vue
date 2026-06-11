<template>
  <section class="panel-41841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41841");
const base = ref(41841);
const total = computed(() => base.value * 2);

function incrementar41841() {
  base.value++;
}
</script>
