<template>
  <section class="panel-40621">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40621");
const base = ref(40621);
const total = computed(() => base.value * 2);

function incrementar40621() {
  base.value++;
}
</script>
