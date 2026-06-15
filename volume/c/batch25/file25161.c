// fichero 25161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25161;

Registro25161 crear_registro25161(int id) {
    Registro25161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
