// fichero 25993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25993;

Registro25993 crear_registro25993(int id) {
    Registro25993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
