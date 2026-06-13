// fichero 20810 -- macros y constantes
#define LIMITE_20810 20910
#define FACTOR_20810 1

int aplicar_limite20810(int valor) {
    if (valor > LIMITE_20810) return LIMITE_20810;
    return valor * FACTOR_20810;
}
