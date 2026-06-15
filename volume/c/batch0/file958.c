// fichero 958 -- macros y constantes -- MODIFICADO
#define LIMITE_958 1158
#define FACTOR_958 5

int aplicar_limite958(int valor) {
    if (valor > LIMITE_958) return LIMITE_958;
    return valor * FACTOR_958;
}
