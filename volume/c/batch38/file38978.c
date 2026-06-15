// fichero 38978 -- macros y constantes -- MODIFICADO
#define LIMITE_38978 39178
#define FACTOR_38978 5

int aplicar_limite38978(int valor) {
    if (valor > LIMITE_38978) return LIMITE_38978;
    return valor * FACTOR_38978;
}
