// fichero 33278 -- macros y constantes -- MODIFICADO
#define LIMITE_33278 33478
#define FACTOR_33278 5

int aplicar_limite33278(int valor) {
    if (valor > LIMITE_33278) return LIMITE_33278;
    return valor * FACTOR_33278;
}
