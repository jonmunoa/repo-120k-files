// fichero 25489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25489;

Registro25489 crear_registro25489(int id) {
    Registro25489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
