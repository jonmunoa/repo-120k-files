<template>
  <section class="panel-20865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20865");
const base = ref(20865);
const total = computed(() => base.value * 2);

function incrementar20865() {
  base.value++;
}
</script>
