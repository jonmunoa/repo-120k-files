<template>
  <section class="panel-25893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25893");
const base = ref(25893);
const total = computed(() => base.value * 2);

function incrementar25893() {
  base.value++;
}
</script>
