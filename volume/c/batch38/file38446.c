// fichero 38446 -- macros y constantes -- MODIFICADO
#define LIMITE_38446 38646
#define FACTOR_38446 3

int aplicar_limite38446(int valor) {
    if (valor > LIMITE_38446) return LIMITE_38446;
    return valor * FACTOR_38446;
}
