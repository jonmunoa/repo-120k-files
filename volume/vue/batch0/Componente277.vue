<template>
  <section class="panel-277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 277");
const base = ref(277);
const total = computed(() => base.value * 2);

function incrementar277() {
  base.value++;
}
</script>
