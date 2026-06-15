// fichero 43502 -- macros y constantes -- MODIFICADO
#define LIMITE_43502 43702
#define FACTOR_43502 4

int aplicar_limite43502(int valor) {
    if (valor > LIMITE_43502) return LIMITE_43502;
    return valor * FACTOR_43502;
}
