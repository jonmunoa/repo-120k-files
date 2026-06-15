// fichero 14150 -- macros y constantes -- MODIFICADO
#define LIMITE_14150 14350
#define FACTOR_14150 2

int aplicar_limite14150(int valor) {
    if (valor > LIMITE_14150) return LIMITE_14150;
    return valor * FACTOR_14150;
}
