// fichero 20626 -- macros y constantes
#define LIMITE_20626 20726
#define FACTOR_20626 2

int aplicar_limite20626(int valor) {
    if (valor > LIMITE_20626) return LIMITE_20626;
    return valor * FACTOR_20626;
}
