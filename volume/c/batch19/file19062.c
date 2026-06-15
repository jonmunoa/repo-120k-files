// fichero 19062 -- macros y constantes -- MODIFICADO
#define LIMITE_19062 19262
#define FACTOR_19062 4

int aplicar_limite19062(int valor) {
    if (valor > LIMITE_19062) return LIMITE_19062;
    return valor * FACTOR_19062;
}
