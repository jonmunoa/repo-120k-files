<template>
  <section class="panel-33377">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33377");
const base = ref(33377);
const total = computed(() => base.value * 2);

function incrementar33377() {
  base.value++;
}
</script>
