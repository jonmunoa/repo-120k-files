<template>
  <section class="panel-40653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40653");
const base = ref(40653);
const total = computed(() => base.value * 2);

function incrementar40653() {
  base.value++;
}
</script>
