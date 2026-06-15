// fichero 2445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2445;

Registro2445 crear_registro2445(int id) {
    Registro2445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
