// fichero 23010 -- macros y constantes
#define LIMITE_23010 23110
#define FACTOR_23010 1

int aplicar_limite23010(int valor) {
    if (valor > LIMITE_23010) return LIMITE_23010;
    return valor * FACTOR_23010;
}
