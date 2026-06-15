// fichero 27286 -- macros y constantes -- MODIFICADO
#define LIMITE_27286 27486
#define FACTOR_27286 3

int aplicar_limite27286(int valor) {
    if (valor > LIMITE_27286) return LIMITE_27286;
    return valor * FACTOR_27286;
}
