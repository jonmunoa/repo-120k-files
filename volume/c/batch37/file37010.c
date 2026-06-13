// fichero 37010 -- macros y constantes
#define LIMITE_37010 37110
#define FACTOR_37010 1

int aplicar_limite37010(int valor) {
    if (valor > LIMITE_37010) return LIMITE_37010;
    return valor * FACTOR_37010;
}
