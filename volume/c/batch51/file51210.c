// fichero 51210 -- macros y constantes
#define LIMITE_51210 51310
#define FACTOR_51210 1

int aplicar_limite51210(int valor) {
    if (valor > LIMITE_51210) return LIMITE_51210;
    return valor * FACTOR_51210;
}
