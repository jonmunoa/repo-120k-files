// fichero 26081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26081;

Registro26081 crear_registro26081(int id) {
    Registro26081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
