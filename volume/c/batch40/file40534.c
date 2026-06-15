// fichero 40534 -- macros y constantes -- MODIFICADO
#define LIMITE_40534 40734
#define FACTOR_40534 6

int aplicar_limite40534(int valor) {
    if (valor > LIMITE_40534) return LIMITE_40534;
    return valor * FACTOR_40534;
}
