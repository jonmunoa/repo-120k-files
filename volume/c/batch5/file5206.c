// fichero 5206 -- macros y constantes -- MODIFICADO
#define LIMITE_5206 5406
#define FACTOR_5206 3

int aplicar_limite5206(int valor) {
    if (valor > LIMITE_5206) return LIMITE_5206;
    return valor * FACTOR_5206;
}
