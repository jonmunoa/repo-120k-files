// fichero 35689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35689;

Registro35689 crear_registro35689(int id) {
    Registro35689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
