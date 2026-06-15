// fichero 28786 -- macros y constantes -- MODIFICADO
#define LIMITE_28786 28986
#define FACTOR_28786 3

int aplicar_limite28786(int valor) {
    if (valor > LIMITE_28786) return LIMITE_28786;
    return valor * FACTOR_28786;
}
