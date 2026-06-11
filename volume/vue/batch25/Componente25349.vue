<template>
  <section class="panel-25349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25349");
const base = ref(25349);
const total = computed(() => base.value * 2);

function incrementar25349() {
  base.value++;
}
</script>
