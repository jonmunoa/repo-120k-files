// fichero 36765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36765;

Registro36765 crear_registro36765(int id) {
    Registro36765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
