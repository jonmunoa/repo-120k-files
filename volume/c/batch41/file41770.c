// fichero 41770 -- macros y constantes
#define LIMITE_41770 41870
#define FACTOR_41770 1

int aplicar_limite41770(int valor) {
    if (valor > LIMITE_41770) return LIMITE_41770;
    return valor * FACTOR_41770;
}
