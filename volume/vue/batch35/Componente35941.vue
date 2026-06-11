<template>
  <section class="panel-35941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35941");
const base = ref(35941);
const total = computed(() => base.value * 2);

function incrementar35941() {
  base.value++;
}
</script>
