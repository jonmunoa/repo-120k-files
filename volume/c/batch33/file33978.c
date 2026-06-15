// fichero 33978 -- macros y constantes -- MODIFICADO
#define LIMITE_33978 34178
#define FACTOR_33978 5

int aplicar_limite33978(int valor) {
    if (valor > LIMITE_33978) return LIMITE_33978;
    return valor * FACTOR_33978;
}
