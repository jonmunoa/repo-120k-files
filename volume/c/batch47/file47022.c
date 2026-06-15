// fichero 47022 -- macros y constantes -- MODIFICADO
#define LIMITE_47022 47222
#define FACTOR_47022 4

int aplicar_limite47022(int valor) {
    if (valor > LIMITE_47022) return LIMITE_47022;
    return valor * FACTOR_47022;
}
