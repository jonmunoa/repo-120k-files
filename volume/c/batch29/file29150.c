// fichero 29150 -- macros y constantes -- MODIFICADO
#define LIMITE_29150 29350
#define FACTOR_29150 2

int aplicar_limite29150(int valor) {
    if (valor > LIMITE_29150) return LIMITE_29150;
    return valor * FACTOR_29150;
}
