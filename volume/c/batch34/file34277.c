// fichero 34277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34277;

Registro34277 crear_registro34277(int id) {
    Registro34277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34277(Registro34277 r) {
    return r.valor + r.id;
}
