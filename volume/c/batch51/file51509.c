// fichero 51509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51509;

Registro51509 crear_registro51509(int id) {
    Registro51509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51509(Registro51509 r) {
    return r.valor + r.id;
}
