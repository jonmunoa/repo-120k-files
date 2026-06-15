// fichero 29126 -- macros y constantes -- MODIFICADO
#define LIMITE_29126 29326
#define FACTOR_29126 3

int aplicar_limite29126(int valor) {
    if (valor > LIMITE_29126) return LIMITE_29126;
    return valor * FACTOR_29126;
}
