// fichero 47502 -- macros y constantes -- MODIFICADO
#define LIMITE_47502 47702
#define FACTOR_47502 4

int aplicar_limite47502(int valor) {
    if (valor > LIMITE_47502) return LIMITE_47502;
    return valor * FACTOR_47502;
}
