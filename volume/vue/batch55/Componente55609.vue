<template>
  <section class="panel-55609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55609");
const base = ref(55609);
const total = computed(() => base.value * 2);

function incrementar55609() {
  base.value++;
}
</script>
