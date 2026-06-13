// fichero 34062 -- macros y constantes
#define LIMITE_34062 34162
#define FACTOR_34062 3

int aplicar_limite34062(int valor) {
    if (valor > LIMITE_34062) return LIMITE_34062;
    return valor * FACTOR_34062;
}
