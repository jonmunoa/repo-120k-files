// fichero 44062 -- macros y constantes -- MODIFICADO
#define LIMITE_44062 44262
#define FACTOR_44062 4

int aplicar_limite44062(int valor) {
    if (valor > LIMITE_44062) return LIMITE_44062;
    return valor * FACTOR_44062;
}
