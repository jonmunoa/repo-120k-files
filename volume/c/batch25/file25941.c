// fichero 25941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25941;

Registro25941 crear_registro25941(int id) {
    Registro25941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
