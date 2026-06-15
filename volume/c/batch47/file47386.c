// fichero 47386 -- macros y constantes -- MODIFICADO
#define LIMITE_47386 47586
#define FACTOR_47386 3

int aplicar_limite47386(int valor) {
    if (valor > LIMITE_47386) return LIMITE_47386;
    return valor * FACTOR_47386;
}
