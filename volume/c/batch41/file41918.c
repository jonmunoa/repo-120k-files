// fichero 41918 -- macros y constantes -- MODIFICADO
#define LIMITE_41918 42118
#define FACTOR_41918 5

int aplicar_limite41918(int valor) {
    if (valor > LIMITE_41918) return LIMITE_41918;
    return valor * FACTOR_41918;
}
