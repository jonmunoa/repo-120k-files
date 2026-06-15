// fichero 7502 -- macros y constantes -- MODIFICADO
#define LIMITE_7502 7702
#define FACTOR_7502 4

int aplicar_limite7502(int valor) {
    if (valor > LIMITE_7502) return LIMITE_7502;
    return valor * FACTOR_7502;
}
