// fichero 19010 -- macros y constantes -- MODIFICADO
#define LIMITE_19010 19210
#define FACTOR_19010 2

int aplicar_limite19010(int valor) {
    if (valor > LIMITE_19010) return LIMITE_19010;
    return valor * FACTOR_19010;
}
