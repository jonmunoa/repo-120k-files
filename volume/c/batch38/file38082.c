// fichero 38082 -- macros y constantes -- MODIFICADO
#define LIMITE_38082 38282
#define FACTOR_38082 4

int aplicar_limite38082(int valor) {
    if (valor > LIMITE_38082) return LIMITE_38082;
    return valor * FACTOR_38082;
}
