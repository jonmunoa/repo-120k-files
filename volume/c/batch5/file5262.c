// fichero 5262 -- macros y constantes -- MODIFICADO
#define LIMITE_5262 5462
#define FACTOR_5262 4

int aplicar_limite5262(int valor) {
    if (valor > LIMITE_5262) return LIMITE_5262;
    return valor * FACTOR_5262;
}
