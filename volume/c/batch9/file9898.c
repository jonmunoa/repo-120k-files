// fichero 9898 -- macros y constantes -- MODIFICADO
#define LIMITE_9898 10098
#define FACTOR_9898 5

int aplicar_limite9898(int valor) {
    if (valor > LIMITE_9898) return LIMITE_9898;
    return valor * FACTOR_9898;
}
