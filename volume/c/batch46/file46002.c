// fichero 46002 -- macros y constantes -- MODIFICADO
#define LIMITE_46002 46202
#define FACTOR_46002 4

int aplicar_limite46002(int valor) {
    if (valor > LIMITE_46002) return LIMITE_46002;
    return valor * FACTOR_46002;
}
