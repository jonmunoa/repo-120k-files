// fichero 45538 -- macros y constantes
#define LIMITE_45538 45638
#define FACTOR_45538 4

int aplicar_limite45538(int valor) {
    if (valor > LIMITE_45538) return LIMITE_45538;
    return valor * FACTOR_45538;
}
