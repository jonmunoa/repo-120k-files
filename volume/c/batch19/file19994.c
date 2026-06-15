// fichero 19994 -- macros y constantes -- MODIFICADO
#define LIMITE_19994 20194
#define FACTOR_19994 6

int aplicar_limite19994(int valor) {
    if (valor > LIMITE_19994) return LIMITE_19994;
    return valor * FACTOR_19994;
}
