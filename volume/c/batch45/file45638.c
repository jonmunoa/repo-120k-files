// fichero 45638 -- macros y constantes -- MODIFICADO
#define LIMITE_45638 45838
#define FACTOR_45638 5

int aplicar_limite45638(int valor) {
    if (valor > LIMITE_45638) return LIMITE_45638;
    return valor * FACTOR_45638;
}
