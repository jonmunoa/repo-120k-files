<template>
  <section class="panel-40609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40609");
const base = ref(40609);
const total = computed(() => base.value * 2);

function incrementar40609() {
  base.value++;
}
</script>
