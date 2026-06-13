// fichero 7502 -- macros y constantes
#define LIMITE_7502 7602
#define FACTOR_7502 3

int aplicar_limite7502(int valor) {
    if (valor > LIMITE_7502) return LIMITE_7502;
    return valor * FACTOR_7502;
}
