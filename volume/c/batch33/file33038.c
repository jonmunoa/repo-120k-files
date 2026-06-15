// fichero 33038 -- macros y constantes -- MODIFICADO
#define LIMITE_33038 33238
#define FACTOR_33038 5

int aplicar_limite33038(int valor) {
    if (valor > LIMITE_33038) return LIMITE_33038;
    return valor * FACTOR_33038;
}
