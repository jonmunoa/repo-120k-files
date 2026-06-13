// fichero 9353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9353;

Registro9353 crear_registro9353(int id) {
    Registro9353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9353(Registro9353 r) {
    return r.valor + r.id;
}
