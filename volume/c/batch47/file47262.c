// fichero 47262 -- macros y constantes -- MODIFICADO
#define LIMITE_47262 47462
#define FACTOR_47262 4

int aplicar_limite47262(int valor) {
    if (valor > LIMITE_47262) return LIMITE_47262;
    return valor * FACTOR_47262;
}
