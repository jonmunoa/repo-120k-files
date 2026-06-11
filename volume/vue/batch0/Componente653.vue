<template>
  <section class="panel-653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 653");
const base = ref(653);
const total = computed(() => base.value * 2);

function incrementar653() {
  base.value++;
}
</script>
