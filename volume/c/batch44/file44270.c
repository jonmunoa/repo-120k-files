// fichero 44270 -- macros y constantes -- MODIFICADO
#define LIMITE_44270 44470
#define FACTOR_44270 2

int aplicar_limite44270(int valor) {
    if (valor > LIMITE_44270) return LIMITE_44270;
    return valor * FACTOR_44270;
}
