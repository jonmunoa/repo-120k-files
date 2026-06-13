// fichero 24934 -- macros y constantes
#define LIMITE_24934 25034
#define FACTOR_24934 5

int aplicar_limite24934(int valor) {
    if (valor > LIMITE_24934) return LIMITE_24934;
    return valor * FACTOR_24934;
}
