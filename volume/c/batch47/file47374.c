// fichero 47374 -- macros y constantes -- MODIFICADO
#define LIMITE_47374 47574
#define FACTOR_47374 6

int aplicar_limite47374(int valor) {
    if (valor > LIMITE_47374) return LIMITE_47374;
    return valor * FACTOR_47374;
}
