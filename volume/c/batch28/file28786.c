// fichero 28786 -- macros y constantes
#define LIMITE_28786 28886
#define FACTOR_28786 2

int aplicar_limite28786(int valor) {
    if (valor > LIMITE_28786) return LIMITE_28786;
    return valor * FACTOR_28786;
}
