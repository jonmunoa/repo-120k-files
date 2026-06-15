// fichero 46970 -- macros y constantes -- MODIFICADO
#define LIMITE_46970 47170
#define FACTOR_46970 2

int aplicar_limite46970(int valor) {
    if (valor > LIMITE_46970) return LIMITE_46970;
    return valor * FACTOR_46970;
}
