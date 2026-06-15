// fichero 4770 -- macros y constantes -- MODIFICADO
#define LIMITE_4770 4970
#define FACTOR_4770 2

int aplicar_limite4770(int valor) {
    if (valor > LIMITE_4770) return LIMITE_4770;
    return valor * FACTOR_4770;
}
