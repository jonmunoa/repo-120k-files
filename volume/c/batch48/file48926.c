// fichero 48926 -- macros y constantes
#define LIMITE_48926 49026
#define FACTOR_48926 2

int aplicar_limite48926(int valor) {
    if (valor > LIMITE_48926) return LIMITE_48926;
    return valor * FACTOR_48926;
}
