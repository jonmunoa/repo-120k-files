// fichero 25897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25897;

Registro25897 crear_registro25897(int id) {
    Registro25897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25897(Registro25897 r) {
    return r.valor + r.id;
}
