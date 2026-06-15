// fichero 47450 -- macros y constantes -- MODIFICADO
#define LIMITE_47450 47650
#define FACTOR_47450 2

int aplicar_limite47450(int valor) {
    if (valor > LIMITE_47450) return LIMITE_47450;
    return valor * FACTOR_47450;
}
