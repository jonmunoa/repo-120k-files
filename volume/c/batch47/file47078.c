// fichero 47078 -- macros y constantes -- MODIFICADO
#define LIMITE_47078 47278
#define FACTOR_47078 5

int aplicar_limite47078(int valor) {
    if (valor > LIMITE_47078) return LIMITE_47078;
    return valor * FACTOR_47078;
}
