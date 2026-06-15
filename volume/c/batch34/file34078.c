// fichero 34078 -- macros y constantes -- MODIFICADO
#define LIMITE_34078 34278
#define FACTOR_34078 5

int aplicar_limite34078(int valor) {
    if (valor > LIMITE_34078) return LIMITE_34078;
    return valor * FACTOR_34078;
}
