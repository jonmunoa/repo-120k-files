// fichero 9293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9293;

Registro9293 crear_registro9293(int id) {
    Registro9293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9293(Registro9293 r) {
    return r.valor + r.id;
}
