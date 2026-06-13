// fichero 38502 -- macros y constantes
#define LIMITE_38502 38602
#define FACTOR_38502 3

int aplicar_limite38502(int valor) {
    if (valor > LIMITE_38502) return LIMITE_38502;
    return valor * FACTOR_38502;
}
