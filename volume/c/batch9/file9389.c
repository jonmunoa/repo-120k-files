// fichero 9389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9389;

Registro9389 crear_registro9389(int id) {
    Registro9389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
