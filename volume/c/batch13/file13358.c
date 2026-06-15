// fichero 13358 -- macros y constantes -- MODIFICADO
#define LIMITE_13358 13558
#define FACTOR_13358 5

int aplicar_limite13358(int valor) {
    if (valor > LIMITE_13358) return LIMITE_13358;
    return valor * FACTOR_13358;
}
