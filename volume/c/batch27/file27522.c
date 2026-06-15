// fichero 27522 -- macros y constantes -- MODIFICADO
#define LIMITE_27522 27722
#define FACTOR_27522 4

int aplicar_limite27522(int valor) {
    if (valor > LIMITE_27522) return LIMITE_27522;
    return valor * FACTOR_27522;
}
