// fichero 19978 -- macros y constantes -- MODIFICADO
#define LIMITE_19978 20178
#define FACTOR_19978 5

int aplicar_limite19978(int valor) {
    if (valor > LIMITE_19978) return LIMITE_19978;
    return valor * FACTOR_19978;
}
