// fichero 31262 -- macros y constantes -- MODIFICADO
#define LIMITE_31262 31462
#define FACTOR_31262 4

int aplicar_limite31262(int valor) {
    if (valor > LIMITE_31262) return LIMITE_31262;
    return valor * FACTOR_31262;
}
