// fichero 38234 -- macros y constantes -- MODIFICADO
#define LIMITE_38234 38434
#define FACTOR_38234 6

int aplicar_limite38234(int valor) {
    if (valor > LIMITE_38234) return LIMITE_38234;
    return valor * FACTOR_38234;
}
