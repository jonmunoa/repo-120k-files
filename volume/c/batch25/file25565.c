// fichero 25565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25565;

Registro25565 crear_registro25565(int id) {
    Registro25565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25565(Registro25565 r) {
    return r.valor + r.id;
}
