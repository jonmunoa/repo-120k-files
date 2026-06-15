// fichero 21369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21369;

Registro21369 crear_registro21369(int id) {
    Registro21369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
