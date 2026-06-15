// fichero 19689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19689;

Registro19689 crear_registro19689(int id) {
    Registro19689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
