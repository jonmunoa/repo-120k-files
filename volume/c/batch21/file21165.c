// fichero 21165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21165;

Registro21165 crear_registro21165(int id) {
    Registro21165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
