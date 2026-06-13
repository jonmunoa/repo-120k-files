// fichero 52150 -- macros y constantes
#define LIMITE_52150 52250
#define FACTOR_52150 1

int aplicar_limite52150(int valor) {
    if (valor > LIMITE_52150) return LIMITE_52150;
    return valor * FACTOR_52150;
}
