// fichero 27962 -- macros y constantes
#define LIMITE_27962 28062
#define FACTOR_27962 3

int aplicar_limite27962(int valor) {
    if (valor > LIMITE_27962) return LIMITE_27962;
    return valor * FACTOR_27962;
}
