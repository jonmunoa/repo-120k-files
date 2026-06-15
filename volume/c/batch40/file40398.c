// fichero 40398 -- macros y constantes -- MODIFICADO
#define LIMITE_40398 40598
#define FACTOR_40398 5

int aplicar_limite40398(int valor) {
    if (valor > LIMITE_40398) return LIMITE_40398;
    return valor * FACTOR_40398;
}
