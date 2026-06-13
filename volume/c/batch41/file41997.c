// fichero 41997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41997;

Registro41997 crear_registro41997(int id) {
    Registro41997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41997(Registro41997 r) {
    return r.valor + r.id;
}
