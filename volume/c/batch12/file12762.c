// fichero 12762 -- macros y constantes
#define LIMITE_12762 12862
#define FACTOR_12762 3

int aplicar_limite12762(int valor) {
    if (valor > LIMITE_12762) return LIMITE_12762;
    return valor * FACTOR_12762;
}
