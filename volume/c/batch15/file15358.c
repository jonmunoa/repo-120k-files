// fichero 15358 -- macros y constantes -- MODIFICADO
#define LIMITE_15358 15558
#define FACTOR_15358 5

int aplicar_limite15358(int valor) {
    if (valor > LIMITE_15358) return LIMITE_15358;
    return valor * FACTOR_15358;
}
