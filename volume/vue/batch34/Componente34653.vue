<template>
  <section class="panel-34653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34653");
const base = ref(34653);
const total = computed(() => base.value * 2);

function incrementar34653() {
  base.value++;
}
</script>
