// fichero 40470 -- macros y constantes -- MODIFICADO
#define LIMITE_40470 40670
#define FACTOR_40470 2

int aplicar_limite40470(int valor) {
    if (valor > LIMITE_40470) return LIMITE_40470;
    return valor * FACTOR_40470;
}
