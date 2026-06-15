// fichero 13958 -- macros y constantes -- MODIFICADO
#define LIMITE_13958 14158
#define FACTOR_13958 5

int aplicar_limite13958(int valor) {
    if (valor > LIMITE_13958) return LIMITE_13958;
    return valor * FACTOR_13958;
}
