// fichero 8078 -- macros y constantes -- MODIFICADO
#define LIMITE_8078 8278
#define FACTOR_8078 5

int aplicar_limite8078(int valor) {
    if (valor > LIMITE_8078) return LIMITE_8078;
    return valor * FACTOR_8078;
}
