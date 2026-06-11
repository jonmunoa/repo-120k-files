<template>
  <section class="panel-56349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56349");
const base = ref(56349);
const total = computed(() => base.value * 2);

function incrementar56349() {
  base.value++;
}
</script>
