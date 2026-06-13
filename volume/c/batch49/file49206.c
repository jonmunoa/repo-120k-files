// fichero 49206 -- macros y constantes
#define LIMITE_49206 49306
#define FACTOR_49206 2

int aplicar_limite49206(int valor) {
    if (valor > LIMITE_49206) return LIMITE_49206;
    return valor * FACTOR_49206;
}
