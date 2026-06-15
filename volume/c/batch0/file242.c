// fichero 242 -- macros y constantes -- MODIFICADO
#define LIMITE_242 442
#define FACTOR_242 4

int aplicar_limite242(int valor) {
    if (valor > LIMITE_242) return LIMITE_242;
    return valor * FACTOR_242;
}
