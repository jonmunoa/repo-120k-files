// fichero 12978 -- macros y constantes -- MODIFICADO
#define LIMITE_12978 13178
#define FACTOR_12978 5

int aplicar_limite12978(int valor) {
    if (valor > LIMITE_12978) return LIMITE_12978;
    return valor * FACTOR_12978;
}
