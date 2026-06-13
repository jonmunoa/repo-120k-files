// fichero 15426 -- macros y constantes
#define LIMITE_15426 15526
#define FACTOR_15426 2

int aplicar_limite15426(int valor) {
    if (valor > LIMITE_15426) return LIMITE_15426;
    return valor * FACTOR_15426;
}
