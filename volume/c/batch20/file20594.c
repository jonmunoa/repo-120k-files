// fichero 20594 -- macros y constantes -- MODIFICADO
#define LIMITE_20594 20794
#define FACTOR_20594 6

int aplicar_limite20594(int valor) {
    if (valor > LIMITE_20594) return LIMITE_20594;
    return valor * FACTOR_20594;
}
