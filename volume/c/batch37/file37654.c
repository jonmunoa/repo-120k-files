// fichero 37654 -- macros y constantes -- MODIFICADO
#define LIMITE_37654 37854
#define FACTOR_37654 6

int aplicar_limite37654(int valor) {
    if (valor > LIMITE_37654) return LIMITE_37654;
    return valor * FACTOR_37654;
}
