// fichero 41958 -- macros y constantes
#define LIMITE_41958 42058
#define FACTOR_41958 4

int aplicar_limite41958(int valor) {
    if (valor > LIMITE_41958) return LIMITE_41958;
    return valor * FACTOR_41958;
}
