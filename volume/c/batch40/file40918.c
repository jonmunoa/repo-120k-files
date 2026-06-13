// fichero 40918 -- macros y constantes
#define LIMITE_40918 41018
#define FACTOR_40918 4

int aplicar_limite40918(int valor) {
    if (valor > LIMITE_40918) return LIMITE_40918;
    return valor * FACTOR_40918;
}
