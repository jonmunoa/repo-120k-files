// fichero 18562 -- macros y constantes -- MODIFICADO
#define LIMITE_18562 18762
#define FACTOR_18562 4

int aplicar_limite18562(int valor) {
    if (valor > LIMITE_18562) return LIMITE_18562;
    return valor * FACTOR_18562;
}
