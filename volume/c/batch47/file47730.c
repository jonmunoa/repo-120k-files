// fichero 47730 -- macros y constantes -- MODIFICADO
#define LIMITE_47730 47930
#define FACTOR_47730 2

int aplicar_limite47730(int valor) {
    if (valor > LIMITE_47730) return LIMITE_47730;
    return valor * FACTOR_47730;
}
