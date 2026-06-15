// fichero 27278 -- macros y constantes -- MODIFICADO
#define LIMITE_27278 27478
#define FACTOR_27278 5

int aplicar_limite27278(int valor) {
    if (valor > LIMITE_27278) return LIMITE_27278;
    return valor * FACTOR_27278;
}
