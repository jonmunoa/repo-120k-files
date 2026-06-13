// fichero 52218 -- macros y constantes
#define LIMITE_52218 52318
#define FACTOR_52218 4

int aplicar_limite52218(int valor) {
    if (valor > LIMITE_52218) return LIMITE_52218;
    return valor * FACTOR_52218;
}
