<template>
  <section class="panel-20773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20773");
const base = ref(20773);
const total = computed(() => base.value * 2);

function incrementar20773() {
  base.value++;
}
</script>
