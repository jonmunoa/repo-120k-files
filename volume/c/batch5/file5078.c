// fichero 5078 -- macros y constantes -- MODIFICADO
#define LIMITE_5078 5278
#define FACTOR_5078 5

int aplicar_limite5078(int valor) {
    if (valor > LIMITE_5078) return LIMITE_5078;
    return valor * FACTOR_5078;
}
