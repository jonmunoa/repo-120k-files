// fichero 9877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9877;

Registro9877 crear_registro9877(int id) {
    Registro9877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9877(Registro9877 r) {
    return r.valor + r.id;
}
