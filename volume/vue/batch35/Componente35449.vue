<template>
  <section class="panel-35449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35449");
const base = ref(35449);
const total = computed(() => base.value * 2);

function incrementar35449() {
  base.value++;
}
</script>
