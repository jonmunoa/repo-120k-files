// fichero 15938 -- macros y constantes -- MODIFICADO
#define LIMITE_15938 16138
#define FACTOR_15938 5

int aplicar_limite15938(int valor) {
    if (valor > LIMITE_15938) return LIMITE_15938;
    return valor * FACTOR_15938;
}
