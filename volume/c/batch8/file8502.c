// fichero 8502 -- macros y constantes -- MODIFICADO
#define LIMITE_8502 8702
#define FACTOR_8502 4

int aplicar_limite8502(int valor) {
    if (valor > LIMITE_8502) return LIMITE_8502;
    return valor * FACTOR_8502;
}
