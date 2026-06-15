// fichero 33394 -- macros y constantes -- MODIFICADO
#define LIMITE_33394 33594
#define FACTOR_33394 6

int aplicar_limite33394(int valor) {
    if (valor > LIMITE_33394) return LIMITE_33394;
    return valor * FACTOR_33394;
}
