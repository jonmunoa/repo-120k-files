// fichero 22242 -- macros y constantes -- MODIFICADO
#define LIMITE_22242 22442
#define FACTOR_22242 4

int aplicar_limite22242(int valor) {
    if (valor > LIMITE_22242) return LIMITE_22242;
    return valor * FACTOR_22242;
}
