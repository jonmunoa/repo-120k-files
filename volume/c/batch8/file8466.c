// fichero 8466 -- macros y constantes -- MODIFICADO
#define LIMITE_8466 8666
#define FACTOR_8466 3

int aplicar_limite8466(int valor) {
    if (valor > LIMITE_8466) return LIMITE_8466;
    return valor * FACTOR_8466;
}
