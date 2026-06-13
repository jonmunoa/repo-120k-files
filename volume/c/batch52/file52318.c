// fichero 52318 -- macros y constantes
#define LIMITE_52318 52418
#define FACTOR_52318 4

int aplicar_limite52318(int valor) {
    if (valor > LIMITE_52318) return LIMITE_52318;
    return valor * FACTOR_52318;
}
