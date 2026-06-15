// fichero 28062 -- macros y constantes -- MODIFICADO
#define LIMITE_28062 28262
#define FACTOR_28062 4

int aplicar_limite28062(int valor) {
    if (valor > LIMITE_28062) return LIMITE_28062;
    return valor * FACTOR_28062;
}
