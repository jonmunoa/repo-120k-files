// fichero 34225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34225;

Registro34225 crear_registro34225(int id) {
    Registro34225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
