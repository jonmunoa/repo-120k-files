<template>
  <section class="panel-13661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13661");
const base = ref(13661);
const total = computed(() => base.value * 2);

function incrementar13661() {
  base.value++;
}
</script>
