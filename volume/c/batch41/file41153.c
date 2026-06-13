// fichero 41153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41153;

Registro41153 crear_registro41153(int id) {
    Registro41153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41153(Registro41153 r) {
    return r.valor + r.id;
}
