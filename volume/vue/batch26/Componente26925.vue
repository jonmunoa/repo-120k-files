<template>
  <section class="panel-26925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26925");
const base = ref(26925);
const total = computed(() => base.value * 2);

function incrementar26925() {
  base.value++;
}
</script>
