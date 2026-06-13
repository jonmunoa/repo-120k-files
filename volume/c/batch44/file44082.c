// fichero 44082 -- macros y constantes
#define LIMITE_44082 44182
#define FACTOR_44082 3

int aplicar_limite44082(int valor) {
    if (valor > LIMITE_44082) return LIMITE_44082;
    return valor * FACTOR_44082;
}
