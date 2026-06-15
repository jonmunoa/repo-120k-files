// fichero 17150 -- macros y constantes -- MODIFICADO
#define LIMITE_17150 17350
#define FACTOR_17150 2

int aplicar_limite17150(int valor) {
    if (valor > LIMITE_17150) return LIMITE_17150;
    return valor * FACTOR_17150;
}
