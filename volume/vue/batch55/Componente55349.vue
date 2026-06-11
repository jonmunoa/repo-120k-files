<template>
  <section class="panel-55349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55349");
const base = ref(55349);
const total = computed(() => base.value * 2);

function incrementar55349() {
  base.value++;
}
</script>
