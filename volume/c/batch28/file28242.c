// fichero 28242 -- macros y constantes -- MODIFICADO
#define LIMITE_28242 28442
#define FACTOR_28242 4

int aplicar_limite28242(int valor) {
    if (valor > LIMITE_28242) return LIMITE_28242;
    return valor * FACTOR_28242;
}
