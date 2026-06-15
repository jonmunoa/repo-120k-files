// fichero 16242 -- macros y constantes -- MODIFICADO
#define LIMITE_16242 16442
#define FACTOR_16242 4

int aplicar_limite16242(int valor) {
    if (valor > LIMITE_16242) return LIMITE_16242;
    return valor * FACTOR_16242;
}
