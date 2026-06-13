// fichero 18134 -- macros y constantes
#define LIMITE_18134 18234
#define FACTOR_18134 5

int aplicar_limite18134(int valor) {
    if (valor > LIMITE_18134) return LIMITE_18134;
    return valor * FACTOR_18134;
}
