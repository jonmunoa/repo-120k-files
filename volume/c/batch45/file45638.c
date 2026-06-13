// fichero 45638 -- macros y constantes
#define LIMITE_45638 45738
#define FACTOR_45638 4

int aplicar_limite45638(int valor) {
    if (valor > LIMITE_45638) return LIMITE_45638;
    return valor * FACTOR_45638;
}
