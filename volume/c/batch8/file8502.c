// fichero 8502 -- macros y constantes
#define LIMITE_8502 8602
#define FACTOR_8502 3

int aplicar_limite8502(int valor) {
    if (valor > LIMITE_8502) return LIMITE_8502;
    return valor * FACTOR_8502;
}
