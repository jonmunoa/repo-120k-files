// fichero 24414 -- macros y constantes
#define LIMITE_24414 24514
#define FACTOR_24414 5

int aplicar_limite24414(int valor) {
    if (valor > LIMITE_24414) return LIMITE_24414;
    return valor * FACTOR_24414;
}
