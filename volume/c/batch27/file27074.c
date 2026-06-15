// fichero 27074 -- macros y constantes -- MODIFICADO
#define LIMITE_27074 27274
#define FACTOR_27074 6

int aplicar_limite27074(int valor) {
    if (valor > LIMITE_27074) return LIMITE_27074;
    return valor * FACTOR_27074;
}
