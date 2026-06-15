// fichero 40778 -- macros y constantes -- MODIFICADO
#define LIMITE_40778 40978
#define FACTOR_40778 5

int aplicar_limite40778(int valor) {
    if (valor > LIMITE_40778) return LIMITE_40778;
    return valor * FACTOR_40778;
}
