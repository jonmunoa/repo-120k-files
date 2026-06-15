// fichero 19938 -- macros y constantes -- MODIFICADO
#define LIMITE_19938 20138
#define FACTOR_19938 5

int aplicar_limite19938(int valor) {
    if (valor > LIMITE_19938) return LIMITE_19938;
    return valor * FACTOR_19938;
}
