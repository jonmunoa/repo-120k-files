// fichero 32502 -- macros y constantes -- MODIFICADO
#define LIMITE_32502 32702
#define FACTOR_32502 4

int aplicar_limite32502(int valor) {
    if (valor > LIMITE_32502) return LIMITE_32502;
    return valor * FACTOR_32502;
}
