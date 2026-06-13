// fichero 9057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9057;

Registro9057 crear_registro9057(int id) {
    Registro9057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9057(Registro9057 r) {
    return r.valor + r.id;
}
