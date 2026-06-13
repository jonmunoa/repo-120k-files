// fichero 20186 -- macros y constantes
#define LIMITE_20186 20286
#define FACTOR_20186 2

int aplicar_limite20186(int valor) {
    if (valor > LIMITE_20186) return LIMITE_20186;
    return valor * FACTOR_20186;
}
