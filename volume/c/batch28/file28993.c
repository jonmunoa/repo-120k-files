// fichero 28993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28993;

Registro28993 crear_registro28993(int id) {
    Registro28993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
