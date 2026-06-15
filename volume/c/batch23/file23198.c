// fichero 23198 -- macros y constantes -- MODIFICADO
#define LIMITE_23198 23398
#define FACTOR_23198 5

int aplicar_limite23198(int valor) {
    if (valor > LIMITE_23198) return LIMITE_23198;
    return valor * FACTOR_23198;
}
