// fichero 25765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25765;

Registro25765 crear_registro25765(int id) {
    Registro25765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
