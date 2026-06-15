// fichero 5222 -- macros y constantes -- MODIFICADO
#define LIMITE_5222 5422
#define FACTOR_5222 4

int aplicar_limite5222(int valor) {
    if (valor > LIMITE_5222) return LIMITE_5222;
    return valor * FACTOR_5222;
}
