// fichero 3262 -- macros y constantes -- MODIFICADO
#define LIMITE_3262 3462
#define FACTOR_3262 4

int aplicar_limite3262(int valor) {
    if (valor > LIMITE_3262) return LIMITE_3262;
    return valor * FACTOR_3262;
}
