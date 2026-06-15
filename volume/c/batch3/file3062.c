// fichero 3062 -- macros y constantes -- MODIFICADO
#define LIMITE_3062 3262
#define FACTOR_3062 4

int aplicar_limite3062(int valor) {
    if (valor > LIMITE_3062) return LIMITE_3062;
    return valor * FACTOR_3062;
}
