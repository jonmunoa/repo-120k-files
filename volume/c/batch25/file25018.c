// fichero 25018 -- macros y constantes -- MODIFICADO
#define LIMITE_25018 25218
#define FACTOR_25018 5

int aplicar_limite25018(int valor) {
    if (valor > LIMITE_25018) return LIMITE_25018;
    return valor * FACTOR_25018;
}
