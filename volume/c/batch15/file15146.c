// fichero 15146 -- macros y constantes -- MODIFICADO
#define LIMITE_15146 15346
#define FACTOR_15146 3

int aplicar_limite15146(int valor) {
    if (valor > LIMITE_15146) return LIMITE_15146;
    return valor * FACTOR_15146;
}
