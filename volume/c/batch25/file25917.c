// fichero 25917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25917;

Registro25917 crear_registro25917(int id) {
    Registro25917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
