// fichero 18262 -- macros y constantes -- MODIFICADO
#define LIMITE_18262 18462
#define FACTOR_18262 4

int aplicar_limite18262(int valor) {
    if (valor > LIMITE_18262) return LIMITE_18262;
    return valor * FACTOR_18262;
}
