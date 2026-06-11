<template>
  <section class="panel-17493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17493");
const base = ref(17493);
const total = computed(() => base.value * 2);

function incrementar17493() {
  base.value++;
}
</script>
