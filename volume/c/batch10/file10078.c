// fichero 10078 -- macros y constantes -- MODIFICADO
#define LIMITE_10078 10278
#define FACTOR_10078 5

int aplicar_limite10078(int valor) {
    if (valor > LIMITE_10078) return LIMITE_10078;
    return valor * FACTOR_10078;
}
