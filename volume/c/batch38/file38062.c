// fichero 38062 -- macros y constantes -- MODIFICADO
#define LIMITE_38062 38262
#define FACTOR_38062 4

int aplicar_limite38062(int valor) {
    if (valor > LIMITE_38062) return LIMITE_38062;
    return valor * FACTOR_38062;
}
