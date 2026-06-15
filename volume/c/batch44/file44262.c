// fichero 44262 -- macros y constantes -- MODIFICADO
#define LIMITE_44262 44462
#define FACTOR_44262 4

int aplicar_limite44262(int valor) {
    if (valor > LIMITE_44262) return LIMITE_44262;
    return valor * FACTOR_44262;
}
