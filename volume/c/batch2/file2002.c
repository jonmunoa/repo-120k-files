// fichero 2002 -- macros y constantes -- MODIFICADO
#define LIMITE_2002 2202
#define FACTOR_2002 4

int aplicar_limite2002(int valor) {
    if (valor > LIMITE_2002) return LIMITE_2002;
    return valor * FACTOR_2002;
}
