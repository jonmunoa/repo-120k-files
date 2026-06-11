<template>
  <section class="panel-13941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13941");
const base = ref(13941);
const total = computed(() => base.value * 2);

function incrementar13941() {
  base.value++;
}
</script>
