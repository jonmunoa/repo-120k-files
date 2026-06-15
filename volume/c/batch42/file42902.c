// fichero 42902 -- macros y constantes -- MODIFICADO
#define LIMITE_42902 43102
#define FACTOR_42902 4

int aplicar_limite42902(int valor) {
    if (valor > LIMITE_42902) return LIMITE_42902;
    return valor * FACTOR_42902;
}
