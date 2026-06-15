// fichero 49062 -- macros y constantes -- MODIFICADO
#define LIMITE_49062 49262
#define FACTOR_49062 4

int aplicar_limite49062(int valor) {
    if (valor > LIMITE_49062) return LIMITE_49062;
    return valor * FACTOR_49062;
}
