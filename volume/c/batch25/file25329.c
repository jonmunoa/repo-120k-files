// fichero 25329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25329;

Registro25329 crear_registro25329(int id) {
    Registro25329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
