// fichero 41918 -- macros y constantes
#define LIMITE_41918 42018
#define FACTOR_41918 4

int aplicar_limite41918(int valor) {
    if (valor > LIMITE_41918) return LIMITE_41918;
    return valor * FACTOR_41918;
}
