// fichero 48926 -- macros y constantes -- MODIFICADO
#define LIMITE_48926 49126
#define FACTOR_48926 3

int aplicar_limite48926(int valor) {
    if (valor > LIMITE_48926) return LIMITE_48926;
    return valor * FACTOR_48926;
}
