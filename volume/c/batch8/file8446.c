// fichero 8446 -- macros y constantes -- MODIFICADO
#define LIMITE_8446 8646
#define FACTOR_8446 3

int aplicar_limite8446(int valor) {
    if (valor > LIMITE_8446) return LIMITE_8446;
    return valor * FACTOR_8446;
}
