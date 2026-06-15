// fichero 8150 -- macros y constantes -- MODIFICADO
#define LIMITE_8150 8350
#define FACTOR_8150 2

int aplicar_limite8150(int valor) {
    if (valor > LIMITE_8150) return LIMITE_8150;
    return valor * FACTOR_8150;
}
