// fichero 30898 -- macros y constantes -- MODIFICADO
#define LIMITE_30898 31098
#define FACTOR_30898 5

int aplicar_limite30898(int valor) {
    if (valor > LIMITE_30898) return LIMITE_30898;
    return valor * FACTOR_30898;
}
