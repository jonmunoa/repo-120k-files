// fichero 25741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25741;

Registro25741 crear_registro25741(int id) {
    Registro25741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
