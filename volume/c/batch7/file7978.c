// fichero 7978 -- macros y constantes
#define LIMITE_7978 8078
#define FACTOR_7978 4

int aplicar_limite7978(int valor) {
    if (valor > LIMITE_7978) return LIMITE_7978;
    return valor * FACTOR_7978;
}
